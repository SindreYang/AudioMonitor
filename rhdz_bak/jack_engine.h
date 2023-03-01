
#ifndef JACK_ENGINE_H
#define JACK_ENGINE_H

#include <QtGui>
#include <libqjack/jack_client.h>
#include <libqjack/volume_meter.h>

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
  VolumeMeter _master;


  JackEngine();
  ~JackEngine();

  bool addMixer(VolumeMeter *vm);
  void removeMixer(VolumeMeter *vm);
  
  bool initEngine(QString name);

public slots:
  void refreshVu();
};



#endif
/* jack_engine.h ends here */
