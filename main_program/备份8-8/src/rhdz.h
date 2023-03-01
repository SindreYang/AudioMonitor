

#ifndef INJECTOR_H
#define INJECTOR_H
#include "../C++/qjackctl/qjackctlSetupForm.h"
#include "../C++/qjackctl/qjackctlMainForm.h"
#include <QtGui>
#include "jack_engine.h"
#include "ui_mainUI.h"

namespace Ui {
class rhdz;
}

class rhdz : public PanelItem
{
  Q_OBJECT
public:
    Ui::mainui *ui;
    QString _clientName;
    QString _confFile;
    QMenu *_menu;
    QRect _geoMem;
    QPushButton _jackClientActivation;
    QPushButton _addMixer;
    QPushButton _addAllMixer;
    QPushButton _removeMixer;
    QTableWidget _mixerGrid;
    JackEngine _jack;

    qjackctlSetup setup;
    qjackctlMainForm w;
    int _timerID;
    bool loadConf();
    bool saveConf();

private slots:
    void jackCtrlClicked();
    void jackStopped();
    void addMixerClicked();
    void addAllMixerClicked();
//    void removeMixerClicked();
    void closeEvent(QCloseEvent*);
    void configUi();
    void timerEvent(QTimerEvent *event);


public:
  explicit rhdz(QString clientName,QWidget *parent = 0);
  ~rhdz();

};

#endif

