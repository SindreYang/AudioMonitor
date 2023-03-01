
#ifndef VOLUME_METER_H
#define VOLUME_METER_H


#include "../meter/vumeter.h"
#include "../midi/midi_widgets.h"


class VolumeMeter : public QWidget
{
Q_OBJECT
 private:
  StereoVuMeter _vu;
  VuMeter _pan;
  Midibut _mute;
  QString _id;
  float _limit;

  void paintEvent(QPaintEvent *);


 public:
  VolumeMeter(QString id, QString group="");
  void setLimit(float l) {_limit=l;}
  QString getID() {return _id;}
};

#endif

/* volume_meter.h ends here */
