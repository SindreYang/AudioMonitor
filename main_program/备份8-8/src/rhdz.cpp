
#include <QtXml>
#include <math.h>
#include "rhdz.h"

rhdz::rhdz(QString clientName,QWidget *parent) :
    PanelItem(parent),
    ui(new Ui::mainui)
{


    //w.togglePatchbayForm();
    //connect(ui->Restart, SIGNAL(clicked()),this,SLOT(w.toggleGraphForm()));
    //读取配置路径
    _menu=NULL;
    if (!clientName.isEmpty()) {
        _clientName=clientName;
        _confFile=QDir::homePath()+"/.rhdz."+_clientName;
    }
    else {
        _clientName="rhdz";
        _confFile=QDir::homePath()+"/.rhdz";
    }

    //初始化界面
    ui->setupUi(this);
    configUi();
    //打开jack
    jackCtrlClicked();
    //载入配置
//    loadConf();


}
rhdz::~rhdz()
{
    delete ui;
}
void rhdz::configUi(){
//    w.setup(&setup);
//    w.resize(5,5);


    _addAllMixer.setText(QString("ALL"));
    _addMixer.setIcon(QIcon(QPixmap(":/add")));
    _removeMixer.setIcon(QIcon(QPixmap(":/remove")));

    ui->cpuMemorylabel->start(1000);
    ui->tab2Layout->addWidget(&_addMixer);
    //ui->toolLayout->addWidget(&_removeMixer);
    ui->tab2Layout->addWidget(&_addAllMixer);
    ui->tab1Layout->addWidget(&_jack._master);
//    ui->tab2Layout->addWidget(&w,5,0,1,4);

    connect(ui->VolumeProgress, SIGNAL(valueChanged),
            this, SLOT(_jack._master.volumeChanged(getValue())));
    connect(ui->Start, SIGNAL(clicked()),
            &_jack, SLOT(monitor_master("2")));
    connect(&_jack, SIGNAL(clientStopped()),
            this, SLOT(jackStopped()));
    connect(&_addAllMixer, SIGNAL(clicked()),
            this, SLOT(addAllMixerClicked()));
    connect(&_addMixer, SIGNAL(clicked()),
            this, SLOT(addMixerClicked()));
    //    connect(&_removeMixer, SIGNAL(clicked()),
    //            this, SLOT(removeMixerClicked()));


//    connect(ui->Stop,
//                     SIGNAL(clicked()),
//                     SLOT(showSetupForm()));
//    connect(ui->Messages,
//                     SIGNAL(clicked()),
//                     SLOT(oggleMessagesStatusForm()));


//    QObject::connect(ui->Patchbay,
//                     SIGNAL(clicked()),
//                     SLOT(togglePatchbayForm()));
//    QObject::connect(ui->Setup,
//                     SIGNAL(clicked()),
//                     SLOT(showSetupForm()));


}
bool rhdz::saveConf(){
    {
        QDomDocument conf;
        QDomProcessingInstruction instr;
        instr=conf.createProcessingInstruction("xml", "version=\"1.0\"  encoding=\"UTF-8\"");
        conf.appendChild(instr);
        QDomElement root, midi, params, mixer, mixers;
        root=conf.createElement("rhdzConf");
        root.setAttribute("xmlns", "http://staxaudio.free.fr/mime-info");
        conf.appendChild(root);

        bool vis=isVisible();
        QRect dims=geometry();
        if (!vis) {
            dims=_geoMem;
        }
        else
            dims=geometry();
        params=conf.createElement("geometry");
        params.setAttribute("visible", vis);
        params.setAttribute("x", dims.x());
        params.setAttribute("y", dims.y());
        params.setAttribute("width", dims.width());
        params.setAttribute("height", dims.height());
        root.appendChild(params);

        root.appendChild(_jack.connectionsToXML());

        mixers=conf.createElement("mixers");
//        for (int i=0; i < _mixerGrid.columnCount(); i++) {
//            mixer=conf.createElement("mixer");
//            VolumeMeter *vm=(VolumeMeter*)_mixerGrid.cellWidget(0, i);
//            mixer.setAttribute("id", vm->getID());
//            mixer.setAttribute("index", i);
//            mixers.appendChild(mixer);
//        }
        root.appendChild(mixers);
        root.appendChild(__midiWidgetMap.midiCtrlsToXML());
        root.appendChild(__midiWidgetMap.midiMapToXML());
//        root.appendChild(_midiIn.toXML(conf));

        QFile f(_confFile);
        if (!f.open(QIODevice::WriteOnly))
            return false;
        QTextStream ts(&f);
        ts << conf.toString();
        f.close();


        return true;
    }
}
bool rhdz::loadConf(){
    QDomDocument conf;
    QFile f(_confFile);
    if (!f.open(QIODevice::ReadOnly))
        return false;
    QString errorStr;
    int errorLine, errorColumn;
    if (!conf.setContent(&f, true, &errorStr, &errorLine, &errorColumn)) {
        qDebug()<<"错误配置文件行数:"<<errorLine<< ", column "<<errorColumn<<":"<<errorStr;
        f.close();
        return false;
    }
    f.close();
    QDomElement root=conf.documentElement();
    if (root.tagName() != "InjectorConf") {
        qDebug()<<"该文件不是此应用的conf文件";
        return false;
    }

    QDomNodeList geo=conf.elementsByTagName("geometry");
    QDomElement elt;

    if (geo.length()) {
        elt=geo.item(0).toElement();
        _geoMem.setRect(elt.attribute("x").toInt(), elt.attribute("y").toInt(),
                        elt.attribute("width").toInt(), elt.attribute("height").toInt());
        setGeometry(_geoMem);
        if (elt.attribute("visible").toInt())
            show();
        else
            hide();

    }
}
void rhdz::jackCtrlClicked(){
    if (_jack.isActive()) {
        _jack.closeClient();
    }
    else {
        if (_jack.initEngine(_clientName)) {
            ui->Start->setText(tr("停止"));
            int refresh=float(_jack.getBlockSize()) / _jack.getSamplerate() * 1000;
            qWarning() << "启动计时器，建议刷新时间为"<<refresh;
            _timerID=startTimer(refresh > 50 ? refresh : 50);
        }
        else
            QMessageBox::warning(this, tr("Error:"),tr("Jack 初始化失败!!!"));
    }

}
void rhdz::jackStopped() {
    ui->Start->setText(tr("开始"));
    killTimer(_timerID);
}
void rhdz::closeEvent(QCloseEvent*)
{
    ui->cpuMemorylabel->stop();
    saveConf();
    _jack.closeClient();
}

void rhdz::addMixerClicked(){
    bool ok;

    QString layoutname=QInputDialog::getText(this, tr("组名"),
                                               tr("组名:"), QLineEdit::Normal,
                                               QString("group_1"),
                                               &ok);
    int layoutnumber=QInputDialog::getInt(this, tr("数量"),
                                               tr("数量:"), QLineEdit::Normal,
                                               1);


//        //vm->setAutoFillBackground(true);
//        //connect(&_vuTimer, SIGNAL(timeout()), vm, SLOT(refresh()));
//        _mixerGrid.setColumnCount(_mixerGrid.columnCount() + 1);
//        _mixerGrid.setCellWidget(0, _mixerGrid.columnCount() - 1, vm);
//        QHBoxLayout *r=new QHBoxLayout;
//        for(int i=0;i<layoutnumber-1;i++){
//            r->addWidget(vm,2);
//        }
        QHBoxLayout *userlayout = ui->gL->findChild<QHBoxLayout  *>(layoutname);
        for(int i=0;i<layoutnumber;i++){
            QString name=QInputDialog::getText(this, tr("新的通道"),
                                                 tr("输入通道名:"), QLineEdit::Normal,
                                                 QString("表名%1").arg(_mixerGrid.columnCount()),
                                                 &ok);
            if (ok && !name.isEmpty()) {
                VolumeMeter *vm=new VolumeMeter(name);

                if (!_jack.addMixer(vm)) {
                    delete vm;
                    return;
                }
                userlayout->addWidget(vm,0);
        }
        userlayout->setSpacing(0);
        userlayout->setMargin(0);
        userlayout->update();
    }
}
void rhdz::addAllMixerClicked(){
    int count=1;
    for (int cc = ui->gL->layout()->count()-1; cc >= 0; --cc)
        {

            QLayoutItem *it = ui->gL->layout()->itemAt(cc);
            QHBoxLayout *userlayout = qobject_cast<QHBoxLayout *>(it->layout());
            if (userlayout != 0)
            {
                userlayout->addStretch();
                for(int i=0;i<4;i++){
                    QString name=QString("%1").arg(count);
                    VolumeMeter *vm=new VolumeMeter(name);
                    if (!_jack.addMixer(vm)) {
                        delete vm;
                        return;
                    }
                    userlayout->addWidget(vm);
                    count++;
                }

            }
        }
}
void rhdz::timerEvent(QTimerEvent *event) {
    if (event->timerId() == _timerID) {
        _jack.refreshVu();
    }
    QWidget::timerEvent(event);
}
