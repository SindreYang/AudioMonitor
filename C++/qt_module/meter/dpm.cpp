#include <math.h>
#include "dpm.h"

Dpm::Dpm()
{
        setMinimumSize(10, 10);
        setOrientation(Qt::Vertical);
        setRange(-70, 0);
        _peak=0;
        setValue(-60);
}
//设置方向
void Dpm::setOrientation(Qt::Orientation o)
{
    QProgressBar::setOrientation(o);
    if (o != Qt::Vertical)
      setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
    else
      setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
}
//重置大小
void Dpm::reset()
{
    setPeak(-70);
}
//刷新
void Dpm::refresh()
{
    setPeak(_peak);
    _peak=-70;
}
//设置peak值
void Dpm::setPeak(float peak)
{
    setValue((int)getDbPercent(getDbVal(peak)));
}

//值处理
void Dpm::processValue(float val)
{
    float vuval;
    
    vuval=fabs(val);
    if (vuval > _peak)
      _peak=vuval;
}
//缓存处理
void Dpm::processBuffer(float *buf, int size)
{
  for (int i=0; i < size; i++)
    processValue(buf[i]);
}
//paintEvent函数
void Dpm::paintEvent(QPaintEvent *event)
{
        QRect rect=event->rect();
        QPalette p=palette(); 
        QPainter painter(this);
        QRectF r;
        painter.setBrush(Qt::black);
        painter.fillRect(rect, painter.brush());

        float evol=fabs(getDbPercent(value())/70.0f);
        qDebug()<<evol<<fabs(getDbPercent(value())/70.0f);
        Qt::Orientation ori=orientation();
        int _brickResolution;
        float brickHeight, brickWidth;
        if (ori == Qt::Vertical) {
            _brickResolution=height() / 3;
            brickWidth=width() - 2;
            brickHeight=(float)height() / (float)_brickResolution;
        }
        else {
            _brickResolution=width() / 3;
            brickHeight=height() - 2;
            brickWidth=3;//(float)width() / (float)_brickResolution;
        }

        //画矩形图
        int brickCount=(int)(evol * _brickResolution);
        QColor color(0, 255, 0);
        int red, green;
        int step=255 / _brickResolution;
        green=color.green();
        red=0;

        for (int i=0; i < brickCount; i++)
        {
              color.setGreen(green);
              color.setRed(red);
              painter.setBrush(QBrush(color));
              if (ori == Qt::Vertical){
                r.setRect(1, (height()-brickHeight*(i+1)+1), brickWidth, brickHeight - 1);
              }
              else{
                r.setRect(brickWidth * i, 1, brickWidth - 1, brickHeight);
                }

              painter.fillRect(r, painter.brush());
              red+=step;
              green-=step;
            }  
}




//
MeterStrip::MeterStrip()
{
    setMinimumSize(30, 30);
    _orientation=Qt::Vertical;
}


void MeterStrip::paintEvent(QPaintEvent *event)
{
    QRect rect=event->rect();

    QPalette p=palette();
    QPainter painter(this);
    int  db_points[] = {-70,-60, -50,-45,-40,-35,-30,-25,-20, -15,-10, -5,-3, 0};
    painter.setBrush(QColor(71, 71, 71));
    painter.fillRect(rect, painter.brush());
    painter.setPen(Qt::white);
    QFont ft("Times");
    ft.setPixelSize(9);
    painter.setFont(ft);
    int pos;
    for (uint i=0; i < sizeof (db_points)/sizeof (db_points[0]); i++) {
        if (_orientation == Qt::Vertical) {
            pos=(int)(height() - (height() * (getDbPercent(db_points[i])/70)));
            qDebug()<<height()<<db_points[i]<<getDbPercent(db_points[i])<<getDbPercent(db_points[i])/70;
            painter.drawText(2, pos+3, QString("%1-").arg(db_points[i]));
        }
        else {
            pos=(int)(width() * (getDbPercent(db_points[i])/70));
            painter.drawText(pos, 10, QString("%1").arg(db_points[i]));
        }
    }
}



//双通道表
StereoDpm::StereoDpm()
{
  QHBoxLayout *lo=new QHBoxLayout;
  lo->addWidget(&_meterLeft);
  lo->addWidget(&_vuLeft);
  lo->addWidget(&_vuRight);
  lo->addWidget(&_meterRight);
  lo->setContentsMargins(0, 0, 0, 0);
  setLayout(lo);
}
StereoDpm::~StereoDpm()
{
  delete layout();
}
void StereoDpm::setOrientation(Qt::Orientation o)
{
  delete layout();
  _vuLeft.setOrientation(o);
  _vuRight.setOrientation(o);
  _meterRight.setOrientation(o);
  _meterLeft.setOrientation(o);
  if (o == Qt::Vertical) {
    QHBoxLayout *lo=new QHBoxLayout;
    lo->addWidget(&_meterLeft);
    lo->addWidget(&_vuLeft);
    lo->addWidget(&_vuRight);
    lo->addWidget(&_meterRight);
    lo->setContentsMargins(0, 0, 0, 0);
    setLayout(lo);
  }
  else {
    QVBoxLayout *lo=new QVBoxLayout;
    lo->addWidget(&_meterLeft);
    lo->addWidget(&_vuLeft);
    lo->addWidget(&_vuRight);
    lo->addWidget(&_meterRight);
    lo->setContentsMargins(0, 0, 0, 0);
    setLayout(lo);
  }
}
