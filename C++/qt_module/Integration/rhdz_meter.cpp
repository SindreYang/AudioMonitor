

#include "rhdz_meter.h"

VolumeMeter::VolumeMeter(QString id, QString group)
{
  _id=id;
  _limit=-1;
  _mute.setCheckable(true);
  _mute.setIcon(QIcon(QPixmap(":/listen")));
  _pan.setOrientation(Qt::Horizontal);
  //_volume.setMidiGroup(group);
  _mute.setMidiGroup(group);
  //_pan.setMidiGroup(group);
  QHBoxLayout *vu=new QHBoxLayout;
  //vu->addWidget(&_volume);
  vu->addWidget(&_vu);
  QVBoxLayout *lo=new QVBoxLayout;
  lo->addLayout(vu, 1);
  lo->addWidget(&_pan);
  lo->addWidget(&_mute);
  setLayout(lo);

  //connect(&_volume, SIGNAL(valueChanged(float)),
	 // this, SLOT(volumeChanged(float)));
  connect(&_pan, SIGNAL(valueChanged(float)),
	  this, SLOT(panChanged(float)));
  connect(&_mute, SIGNAL(toggled(bool)),
	  this, SLOT(muteToggled(bool)));

 // _volume.initFader(id+"_volume", 0, 1, 127);
  //_pan.initFader(id+"_pan", 0, 100, 63, true, true);
  _mute.setMidiID(id+"_mute");
}
void VolumeMeter::paintEvent(QPaintEvent *)
{
  QStyleOption opt;
  opt.init(this);
  QPainter p(this);
  style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
