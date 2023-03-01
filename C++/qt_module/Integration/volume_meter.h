

#ifndef VOLUME_METER_H
#define VOLUME_METER_H

#include "../meter/vumeter.h"
#include "../midi/midi_widgets.h"

class VolumeMeter : public QWidget
{
Q_OBJECT
 private:
  StereoVuMeter _vu;
  Midifader _volume;
  Midifader _pan;
  Midibut _mute;
  QString _id;
  float _limit;

  void paintEvent(QPaintEvent *);

 private slots:
  void volumeChanged(float);
  void panChanged(float);
  void muteToggled(bool);

 public:
  VolumeMeter(QString id, QString group="");

  void setLimit(float l) {_limit=l;}
  QString getID() {return _id;}
  void processBuffers(float *buf1, float *buf2, int size);

 public slots:
  void refresh() {_vu.refresh();}
};

#endif

/* volume_meter.h ends here */
