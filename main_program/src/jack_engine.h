
#ifndef JACK_ENGINE_H
#define JACK_ENGINE_H

#include <QtGui>
#include <../C++/jack2_sever/jack_client.h>
#include <../C++/qt_module/Integration/qv.h>

class JackEngine : public JackClient
{
Q_OBJECT

private:
  bool _audioProcessReady;
  sample_t *buffer1, *buffer2;
  QMutex _mutex;

  QList<qv *> _mixers;

  void audio_process(jack_nframes_t);

public:
   qv _master;


  JackEngine();
  ~JackEngine();

  bool addMixer(qv *vm);
  void removeMixer(qv *vm);
  
  bool initEngine(QString name);

public slots:
  void refreshVu();
};



#endif
/* jack_engine.h ends here */
