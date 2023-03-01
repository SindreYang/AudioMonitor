
#ifndef JACK_ENGINE_H
#define JACK_ENGINE_H

#include <QtGui>
#include <../C++/jack2_sever/jack_client.h>
#include <../C++/qt_module/volume_meter.h>
#include <../C++/qt_module/control_meter.h>
class JackEngine : public JackClient
{
Q_OBJECT

private:
  bool _audioProcessReady;
  sample_t *buffer1, *buffer2;
  QMutex _mutex;

  QList<VolumeMeter*> _mixers;

  void audio_process(jack_nframes_t);

public:
   control_meter _master;


  JackEngine();
  ~JackEngine();

  bool addMixer(VolumeMeter *vm);
  void removeMixer(VolumeMeter *vm);
  
  bool initEngine(QString name);

public slots:
  void refreshVu();
  void monitor_master(QString id);
};



#endif
/* jack_engine.h ends here */
