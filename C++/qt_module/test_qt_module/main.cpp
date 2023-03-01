

#include <QApplication>
////测试第一种vu表
#include "../meter/qvumeter.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QVUMeter w;
    for (double i=-70.0; i <30.0; i++){
       w.setLeftValue(i);
       w.show();
    }
    w.setRightValue(99);

    return a.exec();
}

////测试rhdz
//#include "../Integration/qv.h"
//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    qv *vm=new qv("");
//    vm->show();

//    return a.exec();
//}
//测试第2种vu表
////#include "../meter/vumeter.h"
//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    Vu w1;
//    StereoVuMeter w2;
//    //MeterStrip w3;
//    //VuMeter w4;
//    //w2.setPeak(float 20.0);
//    w1.show();
//    w2.show();
//    //w3.show();
//    //w4.show();

//    return a.exec();
//}


////测试第3种vu表
//#include "../volume_meter.h"
//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    VolumeMeter *vm=new VolumeMeter("");
//    //w.setPeak(float 20.0);
//    vm->show();

//    return a.exec();
//}

/*//测试第4种表
#include "../timebase_widget.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TimeBaseWidget vm;
    //w.setPeak(float 20.0);
    vm.show();

    return a.exec();
}*/


////测试第5种下拉表
//#include "../presetbox.h"
//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    PresetBox vm;
//    //w.setPeak(float 20.0);
//    vm.show();

//    return a.exec();
//}


//测试第6种midi表
//#include "../meter/midi_widgets.h"
//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    MidiInputBox vm1;
//    MidiOutputBox vm2;
//    MidiLearnerDlg vm3;
//    Midibut vm4;
//    Knob  vm5;
//    Fader vm6;
//    Midiknob vm7;
//    Midifader vm8;
//    MidiWidgetMap vm9;


////    vm1.show();
////    vm2.show();
////    vm3.show();
////    vm4.show();
////    vm5.show();
////    vm6.show();
////    vm7.show();
//    vm8.show();


//    return a.exec();
//}

////测试第7种开关
//#include "../metronom.h"
//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    MetronomWidget vm;
//    //w.setPeak(float 20.0);
//    vm.show();

//    return a.exec();
//}



//测试rhdz
//#include "../meter/dpm.h"
//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    StereoDpm vm;

//    vm.show();

//    return a.exec();
//}
