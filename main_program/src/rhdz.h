

#ifndef INJECTOR_H
#define INJECTOR_H

#include <QtGui>
#include "jack_engine.h"

class rhdz: public QWidget
{
  Q_OBJECT
private:
  
  JackEngine _jack;
  QString _clientName;
  QString _confFile;
  QMenu *_menu;
  QSystemTrayIcon _trayIcon;
  QRect _geoMem;

  QVBoxLayout _layout;
  QGroupBox _jackGB;
  QPushButton _jackClientActivation;
  //QGroupBox _ampGB;
  QLabel _staxaudio;
  MidiInputBox _midiIn;

  QPushButton _addMixer;
  QPushButton _removeMixer;

  QTableWidget _mixerGrid;

  MidiLearnerDlg _midiLearner;

  QTimer _vuTimer;
  int _timerID;
  
  void setUpGui();

  void closeEvent(QCloseEvent*);

  bool loadConf();
  bool saveConf();

  void timerEvent(QTimerEvent *event);


private slots:
  void jackCtrlClicked();
  void jackStopped();
  void addMixerClicked();
  void removeMixerClicked();
  void handleMidiEvent(struct MidiEvent);
  void trayIconActivated(QSystemTrayIcon::ActivationReason);


public:
  rhdz(QString clientName);
  ~rhdz();

};

#endif

