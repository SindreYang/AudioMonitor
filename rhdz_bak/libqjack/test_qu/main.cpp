

#include <QApplication>
//测试第一种vu表
#include "../qvumeter.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QVUMeter w;
    w.setLeftValue(20);
    w.setRightValue(99);
    w.show();
    return a.exec();
}

//测试第2种vu表
//#include "../vumeter.h"
//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    Vu w1;
//    StereoVuMeter w2;
//    MeterStrip w3;
//    VuMeter w4;
//    //w.setPeak(float 20.0);
//    w1.show();
//    w2.show();
//    w3.show();
//    w4.show();

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
//#include "../midi_widgets.h"
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


////测试rhdz
//#include "../rhdz_meter.h"
//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    VolumeMeter *vm=new VolumeMeter("");
//    vm->show();

//    return a.exec();
//}
