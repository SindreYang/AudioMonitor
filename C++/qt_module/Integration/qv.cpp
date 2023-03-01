#include "qv.h"
#include <math.h>
qv::qv(QString id, QString group)
{
  _id=id;
  _limit=-1;
  _mute.setCheckable(true);
  _mute.setIcon(QIcon(QPixmap(":/listen")));
  _mute.setMidiGroup(group);
  QHBoxLayout *vu=new QHBoxLayout;
  vu->addWidget(&_vu);
  QVBoxLayout *lo=new QVBoxLayout;
  lo->setContentsMargins(0, 0, 0, 0);
  lo->addLayout(vu,1);
  //lo->addWidget(&_mute);
  setLayout(lo);

  connect(&_mute, SIGNAL(toggled(bool)),
	  this, SLOT(muteToggled(bool)));
  _mute.setMidiID(id+"_mute");
}
void qv::paintEvent(QPaintEvent *)
{
  QStyleOption opt;
  opt.init(this);
  QPainter p(this);
  style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void qv::muteToggled(bool checked)
{
  if (!checked)
    _mute.setIcon(QIcon(QPixmap(":/listen")));
  else
    _mute.setIcon(QIcon(QPixmap(":/mute")));
}

void qv::processBuffers(float *buf1, float *buf2, int size)
{
  if (_mute.isChecked()) {
    memset(buf1, 0, sizeof(float) * size);
    memset(buf2, 0, sizeof(float) * size);
    return;
  }
  float volume=100;
  for (int i=0; i < size; i++) {
    buf1[i]*=volume ;
    buf2[i]*=volume ;
    if (_limit != -1) {
      buf1[i]=hard_clip(buf1[i], -_limit, _limit);
      buf2[i]=hard_clip(buf2[i], -_limit, _limit);
    }
    qDebug()<<"left:"<<buf1[i]<<"right"<<buf2[i];
    _vu.setLeftValue(fabs(buf1[i]));
    _vu.setRightValue(fabs(buf2[i]));
  }
}


