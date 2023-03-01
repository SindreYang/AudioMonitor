

#ifndef VOLUME_METER_H
#define VOLUME_METER_H

#include "../meter/qvumeter.h"
#include "../midi/midi_widgets.h"
#include "../../algorithms_sever/audio_tools.h"
class qv : public QWidget
{
Q_OBJECT
 private:
  QVUMeter _vu;
  Midibut _mute;
  QString _id;
  float _limit;

  void paintEvent(QPaintEvent *);

 private slots:
  void muteToggled(bool);

 public:
  qv(QString id, QString group="");
  void setLimit(float l) {_limit=l;}
  QString getID() {return _id;}
  void processBuffers(float *buf1, float *buf2, int size);

 public slots:
     void refresh(){_vu.refresh();}

};

#endif
