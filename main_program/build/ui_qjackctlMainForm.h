/*
JACK Audio Connection Kit - Qt GUI Interface.

   Copyright (C) 2003-2020, rncbc aka Rui Nuno Capela. All rights reserved.

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

 
*/

/********************************************************************************
** Form generated from reading UI file 'qjackctlMainForm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QJACKCTLMAINFORM_H
#define UI_QJACKCTLMAINFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qjackctlMainForm
{
public:
    QGridLayout *gridLayout;
    QToolButton *SetupToolButton;
    QToolButton *StopToolButton;
    QToolButton *MessagesStatusToolButton;
    QToolButton *ConnectionsToolButton;
    QToolButton *PatchbayToolButton;
    QToolButton *StartToolButton;
    QToolButton *GraphToolButton;
    QToolButton *QuitToolButton;
    QToolButton *AboutToolButton;
    QToolButton *SessionToolButton;
    QFrame *StatusDisplayFrame;
    QGridLayout *gridLayout1;
    QLabel *TransportStateTextLabel;
    QLabel *SampleRateTextLabel;
    QLabel *ServerModeTextLabel;
    QLabel *XrunCountTextLabel;
    QLabel *DspLoadTextLabel;
    QLabel *TransportBpmTextLabel;
    QLabel *ServerStateTextLabel;
    QLabel *TransportTimeTextLabel;
    QLabel *TimeDisplayTextLabel;
    QToolButton *PauseToolButton;
    QToolButton *RewindToolButton;
    QToolButton *BackwardToolButton;
    QToolButton *PlayToolButton;
    QToolButton *ForwardToolButton;

    void setupUi(QWidget *qjackctlMainForm)
    {
        if (qjackctlMainForm->objectName().isEmpty())
            qjackctlMainForm->setObjectName(QString::fromUtf8("qjackctlMainForm"));
        qjackctlMainForm->resize(260, 248);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qjackctlMainForm->sizePolicy().hasHeightForWidth());
        qjackctlMainForm->setSizePolicy(sizePolicy);
        qjackctlMainForm->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/qjackctl.png"), QSize(), QIcon::Normal, QIcon::Off);
        qjackctlMainForm->setWindowIcon(icon);
        gridLayout = new QGridLayout(qjackctlMainForm);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 4);
        SetupToolButton = new QToolButton(qjackctlMainForm);
        SetupToolButton->setObjectName(QString::fromUtf8("SetupToolButton"));
        SetupToolButton->setMinimumSize(QSize(28, 28));
        SetupToolButton->setMaximumSize(QSize(32767, 28));
        SetupToolButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/setup1.png"), QSize(), QIcon::Normal, QIcon::Off);
        SetupToolButton->setIcon(icon1);
        SetupToolButton->setCheckable(true);
        SetupToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(SetupToolButton, 3, 1, 1, 1);

        StopToolButton = new QToolButton(qjackctlMainForm);
        StopToolButton->setObjectName(QString::fromUtf8("StopToolButton"));
        StopToolButton->setMinimumSize(QSize(28, 28));
        StopToolButton->setMaximumSize(QSize(32767, 28));
        StopToolButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/stop1.png"), QSize(), QIcon::Normal, QIcon::Off);
        StopToolButton->setIcon(icon2);
        StopToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(StopToolButton, 0, 1, 1, 1);

        MessagesStatusToolButton = new QToolButton(qjackctlMainForm);
        MessagesStatusToolButton->setObjectName(QString::fromUtf8("MessagesStatusToolButton"));
        MessagesStatusToolButton->setMinimumSize(QSize(28, 28));
        MessagesStatusToolButton->setMaximumSize(QSize(32767, 28));
        MessagesStatusToolButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/messagesstatus1.png"), QSize(), QIcon::Normal, QIcon::Off);
        MessagesStatusToolButton->setIcon(icon3);
        MessagesStatusToolButton->setCheckable(true);
        MessagesStatusToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(MessagesStatusToolButton, 1, 0, 1, 1);

        ConnectionsToolButton = new QToolButton(qjackctlMainForm);
        ConnectionsToolButton->setObjectName(QString::fromUtf8("ConnectionsToolButton"));
        ConnectionsToolButton->setMinimumSize(QSize(28, 28));
        ConnectionsToolButton->setMaximumSize(QSize(32767, 28));
        ConnectionsToolButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/connections1.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConnectionsToolButton->setIcon(icon4);
        ConnectionsToolButton->setCheckable(true);
        ConnectionsToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(ConnectionsToolButton, 2, 0, 1, 1);

        PatchbayToolButton = new QToolButton(qjackctlMainForm);
        PatchbayToolButton->setObjectName(QString::fromUtf8("PatchbayToolButton"));
        PatchbayToolButton->setMinimumSize(QSize(28, 28));
        PatchbayToolButton->setMaximumSize(QSize(32767, 28));
        PatchbayToolButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/patchbay1.png"), QSize(), QIcon::Normal, QIcon::Off);
        PatchbayToolButton->setIcon(icon5);
        PatchbayToolButton->setCheckable(true);
        PatchbayToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(PatchbayToolButton, 2, 1, 1, 1);

        StartToolButton = new QToolButton(qjackctlMainForm);
        StartToolButton->setObjectName(QString::fromUtf8("StartToolButton"));
        StartToolButton->setMinimumSize(QSize(28, 28));
        StartToolButton->setMaximumSize(QSize(32767, 28));
        StartToolButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/start1.png"), QSize(), QIcon::Normal, QIcon::Off);
        StartToolButton->setIcon(icon6);
        StartToolButton->setCheckable(false);
        StartToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(StartToolButton, 0, 0, 1, 1);

        GraphToolButton = new QToolButton(qjackctlMainForm);
        GraphToolButton->setObjectName(QString::fromUtf8("GraphToolButton"));
        GraphToolButton->setMinimumSize(QSize(28, 28));
        GraphToolButton->setMaximumSize(QSize(32767, 28));
        GraphToolButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/graph1.png"), QSize(), QIcon::Normal, QIcon::Off);
        GraphToolButton->setIcon(icon7);
        GraphToolButton->setCheckable(true);
        GraphToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(GraphToolButton, 3, 0, 1, 1);

        QuitToolButton = new QToolButton(qjackctlMainForm);
        QuitToolButton->setObjectName(QString::fromUtf8("QuitToolButton"));
        QuitToolButton->setMinimumSize(QSize(28, 28));
        QuitToolButton->setMaximumSize(QSize(32767, 28));
        QuitToolButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/quit1.png"), QSize(), QIcon::Normal, QIcon::Off);
        QuitToolButton->setIcon(icon8);
        QuitToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(QuitToolButton, 4, 0, 1, 1);

        AboutToolButton = new QToolButton(qjackctlMainForm);
        AboutToolButton->setObjectName(QString::fromUtf8("AboutToolButton"));
        AboutToolButton->setEnabled(false);
        AboutToolButton->setMinimumSize(QSize(28, 28));
        AboutToolButton->setMaximumSize(QSize(32767, 28));
        AboutToolButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/about1.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutToolButton->setIcon(icon9);
        AboutToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(AboutToolButton, 4, 1, 1, 1);

        SessionToolButton = new QToolButton(qjackctlMainForm);
        SessionToolButton->setObjectName(QString::fromUtf8("SessionToolButton"));
        SessionToolButton->setMinimumSize(QSize(28, 28));
        SessionToolButton->setMaximumSize(QSize(32767, 28));
        SessionToolButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/session1.png"), QSize(), QIcon::Normal, QIcon::Off);
        SessionToolButton->setIcon(icon10);
        SessionToolButton->setCheckable(true);
        SessionToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(SessionToolButton, 1, 1, 1, 1);

        StatusDisplayFrame = new QFrame(qjackctlMainForm);
        StatusDisplayFrame->setObjectName(QString::fromUtf8("StatusDisplayFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(StatusDisplayFrame->sizePolicy().hasHeightForWidth());
        StatusDisplayFrame->setSizePolicy(sizePolicy1);
        StatusDisplayFrame->setMaximumSize(QSize(260, 80));
        StatusDisplayFrame->setAutoFillBackground(true);
        StatusDisplayFrame->setFrameShape(QFrame::Panel);
        StatusDisplayFrame->setFrameShadow(QFrame::Sunken);
        gridLayout1 = new QGridLayout(StatusDisplayFrame);
        gridLayout1->setSpacing(0);
        gridLayout1->setContentsMargins(4, 4, 4, 4);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(2, 2, 2, 2);
        TransportStateTextLabel = new QLabel(StatusDisplayFrame);
        TransportStateTextLabel->setObjectName(QString::fromUtf8("TransportStateTextLabel"));
        TransportStateTextLabel->setMinimumSize(QSize(50, 0));
        QFont font;
        font.setPointSize(8);
        TransportStateTextLabel->setFont(font);
        TransportStateTextLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        TransportStateTextLabel->setWordWrap(false);
        TransportStateTextLabel->setIndent(2);

        gridLayout1->addWidget(TransportStateTextLabel, 2, 0, 1, 3);

        SampleRateTextLabel = new QLabel(StatusDisplayFrame);
        SampleRateTextLabel->setObjectName(QString::fromUtf8("SampleRateTextLabel"));
        SampleRateTextLabel->setMinimumSize(QSize(50, 0));
        SampleRateTextLabel->setFont(font);
        SampleRateTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        SampleRateTextLabel->setWordWrap(false);

        gridLayout1->addWidget(SampleRateTextLabel, 0, 6, 1, 1);

        ServerModeTextLabel = new QLabel(StatusDisplayFrame);
        ServerModeTextLabel->setObjectName(QString::fromUtf8("ServerModeTextLabel"));
        ServerModeTextLabel->setMinimumSize(QSize(20, 0));
        ServerModeTextLabel->setFont(font);
        ServerModeTextLabel->setAlignment(Qt::AlignCenter);
        ServerModeTextLabel->setWordWrap(false);

        gridLayout1->addWidget(ServerModeTextLabel, 0, 3, 1, 1);

        XrunCountTextLabel = new QLabel(StatusDisplayFrame);
        XrunCountTextLabel->setObjectName(QString::fromUtf8("XrunCountTextLabel"));
        XrunCountTextLabel->setMinimumSize(QSize(30, 0));
        XrunCountTextLabel->setFont(font);
        XrunCountTextLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        XrunCountTextLabel->setWordWrap(false);
        XrunCountTextLabel->setIndent(2);

        gridLayout1->addWidget(XrunCountTextLabel, 1, 0, 1, 1);

        DspLoadTextLabel = new QLabel(StatusDisplayFrame);
        DspLoadTextLabel->setObjectName(QString::fromUtf8("DspLoadTextLabel"));
        DspLoadTextLabel->setMinimumSize(QSize(40, 0));
        DspLoadTextLabel->setFont(font);
        DspLoadTextLabel->setAlignment(Qt::AlignCenter);
        DspLoadTextLabel->setWordWrap(false);

        gridLayout1->addWidget(DspLoadTextLabel, 0, 4, 1, 2);

        TransportBpmTextLabel = new QLabel(StatusDisplayFrame);
        TransportBpmTextLabel->setObjectName(QString::fromUtf8("TransportBpmTextLabel"));
        TransportBpmTextLabel->setMinimumSize(QSize(30, 0));
        TransportBpmTextLabel->setFont(font);
        TransportBpmTextLabel->setAlignment(Qt::AlignCenter);
        TransportBpmTextLabel->setWordWrap(false);

        gridLayout1->addWidget(TransportBpmTextLabel, 2, 3, 1, 2);

        ServerStateTextLabel = new QLabel(StatusDisplayFrame);
        ServerStateTextLabel->setObjectName(QString::fromUtf8("ServerStateTextLabel"));
        ServerStateTextLabel->setMinimumSize(QSize(50, 0));
        ServerStateTextLabel->setFont(font);
        ServerStateTextLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ServerStateTextLabel->setWordWrap(false);
        ServerStateTextLabel->setIndent(2);

        gridLayout1->addWidget(ServerStateTextLabel, 0, 0, 1, 3);

        TransportTimeTextLabel = new QLabel(StatusDisplayFrame);
        TransportTimeTextLabel->setObjectName(QString::fromUtf8("TransportTimeTextLabel"));
        TransportTimeTextLabel->setMinimumSize(QSize(80, 0));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        TransportTimeTextLabel->setFont(font1);
        TransportTimeTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TransportTimeTextLabel->setWordWrap(false);

        gridLayout1->addWidget(TransportTimeTextLabel, 2, 5, 1, 2);

        TimeDisplayTextLabel = new QLabel(StatusDisplayFrame);
        TimeDisplayTextLabel->setObjectName(QString::fromUtf8("TimeDisplayTextLabel"));
        TimeDisplayTextLabel->setMinimumSize(QSize(130, 0));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        TimeDisplayTextLabel->setFont(font2);
        TimeDisplayTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TimeDisplayTextLabel->setWordWrap(false);

        gridLayout1->addWidget(TimeDisplayTextLabel, 1, 2, 1, 5);

        PauseToolButton = new QToolButton(StatusDisplayFrame);
        PauseToolButton->setObjectName(QString::fromUtf8("PauseToolButton"));
        sizePolicy.setHeightForWidth(PauseToolButton->sizePolicy().hasHeightForWidth());
        PauseToolButton->setSizePolicy(sizePolicy);
        PauseToolButton->setMinimumSize(QSize(28, 28));
        PauseToolButton->setMaximumSize(QSize(48, 28));
        PauseToolButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/pause1.png"), QSize(), QIcon::Normal, QIcon::Off);
        PauseToolButton->setIcon(icon11);

        gridLayout1->addWidget(PauseToolButton, 3, 3, 1, 1);

        RewindToolButton = new QToolButton(StatusDisplayFrame);
        RewindToolButton->setObjectName(QString::fromUtf8("RewindToolButton"));
        RewindToolButton->setMinimumSize(QSize(28, 28));
        RewindToolButton->setMaximumSize(QSize(48, 28));
        RewindToolButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/rewind1.png"), QSize(), QIcon::Normal, QIcon::Off);
        RewindToolButton->setIcon(icon12);

        gridLayout1->addWidget(RewindToolButton, 3, 2, 1, 1);

        BackwardToolButton = new QToolButton(StatusDisplayFrame);
        BackwardToolButton->setObjectName(QString::fromUtf8("BackwardToolButton"));
        BackwardToolButton->setMinimumSize(QSize(28, 28));
        BackwardToolButton->setMaximumSize(QSize(48, 28));
        BackwardToolButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/backward1.png"), QSize(), QIcon::Normal, QIcon::Off);
        BackwardToolButton->setIcon(icon13);
        BackwardToolButton->setAutoRepeat(true);

        gridLayout1->addWidget(BackwardToolButton, 3, 1, 1, 1);

        PlayToolButton = new QToolButton(StatusDisplayFrame);
        PlayToolButton->setObjectName(QString::fromUtf8("PlayToolButton"));
        PlayToolButton->setMinimumSize(QSize(28, 28));
        PlayToolButton->setMaximumSize(QSize(48, 28));
        PlayToolButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/play1.png"), QSize(), QIcon::Normal, QIcon::Off);
        PlayToolButton->setIcon(icon14);
        PlayToolButton->setCheckable(true);

        gridLayout1->addWidget(PlayToolButton, 3, 4, 1, 1);

        ForwardToolButton = new QToolButton(StatusDisplayFrame);
        ForwardToolButton->setObjectName(QString::fromUtf8("ForwardToolButton"));
        ForwardToolButton->setMinimumSize(QSize(28, 28));
        ForwardToolButton->setMaximumSize(QSize(48, 28));
        ForwardToolButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/forward1.png"), QSize(), QIcon::Normal, QIcon::Off);
        ForwardToolButton->setIcon(icon15);
        ForwardToolButton->setAutoRepeat(true);

        gridLayout1->addWidget(ForwardToolButton, 3, 5, 1, 1);


        gridLayout->addWidget(StatusDisplayFrame, 5, 0, 1, 2);

        QWidget::setTabOrder(StartToolButton, StopToolButton);

        retranslateUi(qjackctlMainForm);

        QMetaObject::connectSlotsByName(qjackctlMainForm);
    } // setupUi

    void retranslateUi(QWidget *qjackctlMainForm)
    {
#if QT_CONFIG(tooltip)
        SetupToolButton->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Show settings and options dialog", nullptr));
#endif // QT_CONFIG(tooltip)
        SetupToolButton->setText(QCoreApplication::translate("qjackctlMainForm", "Set&up...", nullptr));
#if QT_CONFIG(tooltip)
        StopToolButton->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Stop the JACK server", nullptr));
#endif // QT_CONFIG(tooltip)
        StopToolButton->setText(QCoreApplication::translate("qjackctlMainForm", "S&top", nullptr));
#if QT_CONFIG(tooltip)
        MessagesStatusToolButton->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Show/hide the messages log/status window", nullptr));
#endif // QT_CONFIG(tooltip)
        MessagesStatusToolButton->setText(QCoreApplication::translate("qjackctlMainForm", "&Messages", nullptr));
#if QT_CONFIG(tooltip)
        ConnectionsToolButton->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Show/hide the connections window", nullptr));
#endif // QT_CONFIG(tooltip)
        ConnectionsToolButton->setText(QCoreApplication::translate("qjackctlMainForm", "&Connect", nullptr));
#if QT_CONFIG(tooltip)
        PatchbayToolButton->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Show/hide the patchbay editor window", nullptr));
#endif // QT_CONFIG(tooltip)
        PatchbayToolButton->setText(QCoreApplication::translate("qjackctlMainForm", "&Patchbay", nullptr));
#if QT_CONFIG(tooltip)
        StartToolButton->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Start the JACK server", nullptr));
#endif // QT_CONFIG(tooltip)
        StartToolButton->setText(QCoreApplication::translate("qjackctlMainForm", "&Start", nullptr));
#if QT_CONFIG(tooltip)
        GraphToolButton->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Show/hide the graph window", nullptr));
#endif // QT_CONFIG(tooltip)
        GraphToolButton->setText(QCoreApplication::translate("qjackctlMainForm", "&Graph", nullptr));
#if QT_CONFIG(tooltip)
        QuitToolButton->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Quit processing and exit", nullptr));
#endif // QT_CONFIG(tooltip)
        QuitToolButton->setText(QCoreApplication::translate("qjackctlMainForm", "&Quit", nullptr));
#if QT_CONFIG(tooltip)
        AboutToolButton->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Show information about this application", nullptr));
#endif // QT_CONFIG(tooltip)
        AboutToolButton->setText(QCoreApplication::translate("qjackctlMainForm", "Ab&out...", nullptr));
#if QT_CONFIG(tooltip)
        SessionToolButton->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Show/hide the session management window", nullptr));
#endif // QT_CONFIG(tooltip)
        SessionToolButton->setText(QCoreApplication::translate("qjackctlMainForm", "S&ession", nullptr));
#if QT_CONFIG(tooltip)
        TransportStateTextLabel->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Transport state", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SampleRateTextLabel->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Sample rate", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ServerModeTextLabel->setToolTip(QCoreApplication::translate("qjackctlMainForm", "JACK server mode", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        XrunCountTextLabel->setToolTip(QCoreApplication::translate("qjackctlMainForm", "XRUN Count (notifications)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        DspLoadTextLabel->setToolTip(QCoreApplication::translate("qjackctlMainForm", "DSP Load", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TransportBpmTextLabel->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Transport BPM", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ServerStateTextLabel->setToolTip(QCoreApplication::translate("qjackctlMainForm", "JACK server state", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TransportTimeTextLabel->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Transport time", nullptr));
#endif // QT_CONFIG(tooltip)
        TransportTimeTextLabel->setText(QString());
#if QT_CONFIG(tooltip)
        TimeDisplayTextLabel->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Time display", nullptr));
#endif // QT_CONFIG(tooltip)
        TimeDisplayTextLabel->setText(QString());
#if QT_CONFIG(tooltip)
        PauseToolButton->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Stop transport rolling", nullptr));
#endif // QT_CONFIG(tooltip)
        PauseToolButton->setText(QCoreApplication::translate("qjackctlMainForm", "Pa&use", nullptr));
#if QT_CONFIG(tooltip)
        RewindToolButton->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Rewind transport", nullptr));
#endif // QT_CONFIG(tooltip)
        RewindToolButton->setText(QCoreApplication::translate("qjackctlMainForm", "&Rewind", nullptr));
#if QT_CONFIG(tooltip)
        BackwardToolButton->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Backward transport", nullptr));
#endif // QT_CONFIG(tooltip)
        BackwardToolButton->setText(QCoreApplication::translate("qjackctlMainForm", "&Backward", nullptr));
#if QT_CONFIG(tooltip)
        PlayToolButton->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Start transport rolling", nullptr));
#endif // QT_CONFIG(tooltip)
        PlayToolButton->setText(QCoreApplication::translate("qjackctlMainForm", "&Play", nullptr));
#if QT_CONFIG(tooltip)
        ForwardToolButton->setToolTip(QCoreApplication::translate("qjackctlMainForm", "Forward transport", nullptr));
#endif // QT_CONFIG(tooltip)
        ForwardToolButton->setText(QCoreApplication::translate("qjackctlMainForm", "&Forward", nullptr));
        (void)qjackctlMainForm;
    } // retranslateUi

};

namespace Ui {
    class qjackctlMainForm: public Ui_qjackctlMainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QJACKCTLMAINFORM_H
