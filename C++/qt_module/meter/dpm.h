#ifndef VUMETER_H
#define VUMETER_H

#include <QtGui>
#include "../../algorithms_sever/audio_tools.h"
#include <QtWidgets>
#include <QLabel>
class Dpm : public QProgressBar
{
  Q_OBJECT
public:
  Dpm();

  void setOrientation(Qt::Orientation);
  void reset();
  void processValue(float val);
  void processBuffer(float *buf, int size);

public slots:
  void refresh();

private:
  float _peak;

  void setPeak(float val);
  void paintEvent( QPaintEvent* event );

};

class MeterStrip : public QWidget
{
    Q_OBJECT
private:
    Qt::Orientation _orientation;
    void paintEvent( QPaintEvent* event );

public:
    MeterStrip();
    void setOrientation(Qt::Orientation o) {_orientation=o;}

};
class StereoDpm : public QWidget
{
  Q_OBJECT
 private:
  Dpm _vuLeft, _vuRight;
  MeterStrip _meterRight,_meterLeft;

 public:
  StereoDpm();
  ~StereoDpm();

  void setOrientation(Qt::Orientation o);
  void reset() {_vuLeft.reset();_vuRight.reset();}
  void processLeftValue(float val) {_vuLeft.processValue(val);}
  void processRightValue(float val) {_vuRight.processValue(val);}
  void processBuffers(float *buf1, float *buf2, int size) {_vuLeft.processBuffer(buf1, size);_vuRight.processBuffer(buf2, size);}

 public slots:
  void refresh() {_vuLeft.refresh();_vuRight.refresh();}
};

#endif
