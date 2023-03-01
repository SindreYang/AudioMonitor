/********************************************************************************
** Form generated from reading UI file 'mainUI.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINUI_H
#define UI_MAINUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt_h/buttongroup.h"
#include "qt_h/cpumemorylabel.h"
#include "qt_h/gaugeprogress.h"
#include "qt_h/navlabel.h"
#include "qt_h/panelitem.h"
#include "qt_h/switchbutton.h"

QT_BEGIN_NAMESPACE

class Ui_mainui
{
public:
    QHBoxLayout *mainuiLayout;
    QGridLayout *gL;
    NavLabel *group_label_4;
    QHBoxLayout *group_6;
    NavLabel *group_label_7;
    QHBoxLayout *group_5;
    NavLabel *group_label_2;
    QHBoxLayout *group_4;
    QHBoxLayout *group_1;
    QHBoxLayout *group_2;
    QHBoxLayout *group_3;
    NavLabel *group_label_6;
    NavLabel *group_label_1;
    NavLabel *group_label_5;
    QHBoxLayout *group_8;
    QHBoxLayout *group_7;
    NavLabel *group_label_8;
    NavLabel *group_label_3;
    QVBoxLayout *leftLayout;
    ButtonGroup *ChangeGroup;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QHBoxLayout *tab1Layout;
    QWidget *tab_2;
    QGridLayout *tab2Layout;
    SwitchButton *Modelswitch;
    GaugeProgress *VolumeProgress;
    QPushButton *Start;
    QPushButton *Restart;
    QPushButton *Messages;
    QPushButton *Setup;
    QPushButton *Graph;
    QPushButton *Patchbay;
    CpuMemoryLabel *cpuMemorylabel;

    void setupUi(PanelItem *mainui)
    {
        if (mainui->objectName().isEmpty())
            mainui->setObjectName(QString::fromUtf8("mainui"));
        mainui->setWindowModality(Qt::NonModal);
        mainui->setEnabled(true);
        mainui->resize(995, 788);
        mainui->setProperty("isAlarm", QVariant(false));
        mainuiLayout = new QHBoxLayout(mainui);
        mainuiLayout->setObjectName(QString::fromUtf8("mainuiLayout"));
        mainuiLayout->setContentsMargins(-1, 35, -1, -1);
        gL = new QGridLayout();
        gL->setObjectName(QString::fromUtf8("gL"));
        gL->setSizeConstraint(QLayout::SetDefaultConstraint);
        gL->setHorizontalSpacing(4);
        gL->setVerticalSpacing(2);
        gL->setContentsMargins(0, -1, -1, -1);
        group_label_4 = new NavLabel(mainui);
        group_label_4->setObjectName(QString::fromUtf8("group_label_4"));
        group_label_4->setScaledContents(false);
        group_label_4->setIndent(-1);
        group_label_4->setBackground(QColor(136, 138, 133));
        group_label_4->setArrowPosition(NavLabel::ArrowPosition_Bottom);
        group_label_4->setMaximumHeight(20);

        gL->addWidget(group_label_4, 1, 3, 1, 1);

        group_6 = new QHBoxLayout();
        group_6->setObjectName(QString::fromUtf8("group_6"));

        gL->addLayout(group_6, 5, 1, 1, 1);

        group_label_7 = new NavLabel(mainui);
        group_label_7->setObjectName(QString::fromUtf8("group_label_7"));
        group_label_7->setBackground(QColor(136, 138, 133));
        group_label_7->setArrowPosition(NavLabel::ArrowPosition_Bottom);
        group_label_7->setMaximumHeight(20);

        gL->addWidget(group_label_7, 3, 2, 1, 1);

        group_5 = new QHBoxLayout();
        group_5->setObjectName(QString::fromUtf8("group_5"));

        gL->addLayout(group_5, 5, 0, 1, 1);

        group_label_2 = new NavLabel(mainui);
        group_label_2->setObjectName(QString::fromUtf8("group_label_2"));
        group_label_2->setBackground(QColor(136, 138, 133));
        group_label_2->setArrowPosition(NavLabel::ArrowPosition_Bottom);
        group_label_2->setMaximumHeight(20);

        gL->addWidget(group_label_2, 1, 1, 1, 1);

        group_4 = new QHBoxLayout();
        group_4->setObjectName(QString::fromUtf8("group_4"));
        group_4->setSizeConstraint(QLayout::SetFixedSize);

        gL->addLayout(group_4, 2, 3, 1, 1);

        group_1 = new QHBoxLayout();
        group_1->setSpacing(0);
        group_1->setObjectName(QString::fromUtf8("group_1"));
        group_1->setSizeConstraint(QLayout::SetFixedSize);

        gL->addLayout(group_1, 2, 0, 1, 1);

        group_2 = new QHBoxLayout();
        group_2->setObjectName(QString::fromUtf8("group_2"));

        gL->addLayout(group_2, 2, 1, 1, 1);

        group_3 = new QHBoxLayout();
        group_3->setObjectName(QString::fromUtf8("group_3"));

        gL->addLayout(group_3, 2, 2, 1, 1);

        group_label_6 = new NavLabel(mainui);
        group_label_6->setObjectName(QString::fromUtf8("group_label_6"));
        group_label_6->setBackground(QColor(136, 138, 133));
        group_label_6->setArrowPosition(NavLabel::ArrowPosition_Bottom);
        group_label_6->setMaximumHeight(20);
        gL->addWidget(group_label_6, 3, 1, 1, 1);

        group_label_1 = new NavLabel(mainui);
        group_label_1->setObjectName(QString::fromUtf8("group_label_1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(group_label_1->sizePolicy().hasHeightForWidth());
        group_label_1->setSizePolicy(sizePolicy);
        group_label_1->setLayoutDirection(Qt::LeftToRight);
        group_label_1->setScaledContents(false);
        group_label_1->setBackground(QColor(136, 138, 133));
        group_label_1->setArrowPosition(NavLabel::ArrowPosition_Bottom);
        group_label_1->setMaximumHeight(20);
        gL->addWidget(group_label_1, 1, 0, 1, 1);

        group_label_5 = new NavLabel(mainui);
        group_label_5->setObjectName(QString::fromUtf8("group_label_5"));

        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(group_label_5->sizePolicy().hasHeightForWidth());
        group_label_5->setSizePolicy(sizePolicy1);
        group_label_5->setBackground(QColor(136, 138, 133));
        group_label_5->setArrowPosition(NavLabel::ArrowPosition_Bottom);
        group_label_5->setMaximumHeight(20);

        gL->addWidget(group_label_5, 3, 0, 1, 1);

        group_8 = new QHBoxLayout();
        group_8->setObjectName(QString::fromUtf8("group_8"));

        gL->addLayout(group_8, 5, 3, 1, 1);

        group_7 = new QHBoxLayout();
        group_7->setObjectName(QString::fromUtf8("group_7"));

        gL->addLayout(group_7, 5, 2, 1, 1);

        group_label_8 = new NavLabel(mainui);
        group_label_8->setObjectName(QString::fromUtf8("group_label_8"));
        group_label_8->setBackground(QColor(136, 138, 133));
        group_label_8->setArrowPosition(NavLabel::ArrowPosition_Bottom);
        group_label_8->setMaximumHeight(20);

        gL->addWidget(group_label_8, 3, 3, 1, 1);

        group_label_3 = new NavLabel(mainui);
        group_label_3->setObjectName(QString::fromUtf8("group_label_3"));
        group_label_3->setBackground(QColor(136, 138, 133));
        group_label_3->setArrowPosition(NavLabel::ArrowPosition_Bottom);
        group_label_3->setMaximumHeight(20);
        gL->addWidget(group_label_3, 1, 2, 1, 1);

        gL->setColumnStretch(0, 4);
        gL->setColumnStretch(1, 4);
        gL->setColumnStretch(2, 4);
        gL->setColumnStretch(3, 4);

        mainuiLayout->addLayout(gL);

        leftLayout = new QVBoxLayout();
        leftLayout->setObjectName(QString::fromUtf8("leftLayout"));
        ChangeGroup = new ButtonGroup(mainui);
        ChangeGroup->setObjectName(QString::fromUtf8("ChangeGroup"));
        ChangeGroup->setInterval(300);
        ChangeGroup->setLineLen(3);
        ChangeGroup->setIndex(0);
        ChangeGroup->setLineColor(QColor(136, 138, 133));
        ChangeGroup->setBtnNormalColor(QColor(46, 52, 54));
        ChangeGroup->setBtnHoverColor(QColor(102, 102, 102));
        ChangeGroup->setBtnDarkColor(QColor(111, 122, 126));
        ChangeGroup->setTextNormalColor(QColor(243, 243, 243));
        ChangeGroup->setTextHoverColor(QColor(245, 121, 0));
        ChangeGroup->setTextDarkColor(QColor(136, 138, 133));

        leftLayout->addWidget(ChangeGroup);

        tabWidget = new QTabWidget(mainui);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        tab1Layout = new QHBoxLayout(tab1);
        tab1Layout->setObjectName(QString::fromUtf8("tab1Layout"));
        tabWidget->addTab(tab1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab2Layout = new QGridLayout(tab_2);
        tab2Layout->setObjectName(QString::fromUtf8("tab2Layout"));
        tab2Layout->setSizeConstraint(QLayout::SetDefaultConstraint);
        Modelswitch = new SwitchButton(tab_2);
        Modelswitch->setObjectName(QString::fromUtf8("Modelswitch"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Modelswitch->sizePolicy().hasHeightForWidth());
        Modelswitch->setSizePolicy(sizePolicy3);
        Modelswitch->setSpace(2);
        Modelswitch->setChecked(false);
        Modelswitch->setShowCircle(false);
        Modelswitch->setAnimation(true);
        Modelswitch->setBgColorOff(QColor(46, 52, 54));
        Modelswitch->setBgColorOn(QColor(46, 52, 54));
        Modelswitch->setSliderColorOff(QColor(4, 241, 246));
        Modelswitch->setSliderColorOn(QColor(4, 241, 246));

        tab2Layout->addWidget(Modelswitch, 0, 0, 1, 1);

        VolumeProgress = new GaugeProgress(tab_2);
        VolumeProgress->setObjectName(QString::fromUtf8("VolumeProgress"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(VolumeProgress->sizePolicy().hasHeightForWidth());
        VolumeProgress->setSizePolicy(sizePolicy4);
        VolumeProgress->setShowValue(true);

        tab2Layout->addWidget(VolumeProgress, 0, 1, 1, 1);

        Start = new QPushButton(tab_2);
        Start->setObjectName(QString::fromUtf8("Start"));

        tab2Layout->addWidget(Start, 1, 0, 1, 1);

        Restart = new QPushButton(tab_2);
        Restart->setObjectName(QString::fromUtf8("Restart"));

        tab2Layout->addWidget(Restart, 1, 1, 1, 1);

        Messages = new QPushButton(tab_2);
        Messages->setObjectName(QString::fromUtf8("Messages"));

        tab2Layout->addWidget(Messages, 2, 0, 1, 1);

        Setup = new QPushButton(tab_2);
        Setup->setObjectName(QString::fromUtf8("Setup"));

        tab2Layout->addWidget(Setup, 2, 1, 1, 1);

        Graph = new QPushButton(tab_2);
        Graph->setObjectName(QString::fromUtf8("Graph"));

        tab2Layout->addWidget(Graph, 3, 0, 1, 1);

        Patchbay = new QPushButton(tab_2);
        Patchbay->setObjectName(QString::fromUtf8("Patchbay"));

        tab2Layout->addWidget(Patchbay, 3, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());

        leftLayout->addWidget(tabWidget);

        cpuMemorylabel = new CpuMemoryLabel(mainui);
        cpuMemorylabel->setObjectName(QString::fromUtf8("cpuMemorylabel"));
        sizePolicy4.setHeightForWidth(cpuMemorylabel->sizePolicy().hasHeightForWidth());
        cpuMemorylabel->setSizePolicy(sizePolicy4);

        leftLayout->addWidget(cpuMemorylabel);


        mainuiLayout->addLayout(leftLayout);

        mainuiLayout->setStretch(0, 3);
        mainuiLayout->setStretch(1, 1);

        retranslateUi(mainui);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mainui);
    } // setupUi

    void retranslateUi(PanelItem *mainui)
    {
        mainui->setWindowTitle(QApplication::translate("mainui", "Form", nullptr));
        mainui->setTitleText(QApplication::translate("mainui", "\351\237\263\351\242\221\347\233\221\346\265\213", nullptr));
        group_label_4->setText(QApplication::translate("mainui", "\345\210\206\347\261\273\347\273\2044", nullptr));
        group_label_7->setText(QApplication::translate("mainui", "\345\210\206\347\261\273\347\273\2047", nullptr));
        group_label_2->setText(QApplication::translate("mainui", "\345\210\206\347\261\273\347\273\2042", nullptr));
        group_label_6->setText(QApplication::translate("mainui", "\345\210\206\347\261\273\347\273\2046", nullptr));
        group_label_1->setText(QApplication::translate("mainui", "\345\210\206\347\261\273\347\273\2041", nullptr));
        group_label_5->setText(QApplication::translate("mainui", "\345\210\206\347\261\273\347\273\2045", nullptr));
        group_label_8->setText(QApplication::translate("mainui", "\345\210\206\347\261\273\347\273\2048", nullptr));
        group_label_3->setText(QApplication::translate("mainui", "\345\210\206\347\261\273\347\273\2043", nullptr));
        ChangeGroup->setTexts(QApplication::translate("mainui", "0-32;32-64;64-128", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("mainui", "\347\233\221\350\247\206", nullptr));
        Modelswitch->setTextOff(QApplication::translate("mainui", "\350\275\256\345\220\254", nullptr));
        Modelswitch->setTextOn(QApplication::translate("mainui", "\347\233\221\345\220\254", nullptr));
        Start->setText(QApplication::translate("mainui", "\345\274\200\345\247\213", nullptr));
        Restart->setText(QApplication::translate("mainui", "restart", nullptr));
        Messages->setText(QApplication::translate("mainui", "\346\227\245\345\277\227", nullptr));
        Setup->setText(QApplication::translate("mainui", "\350\256\276\347\275\256", nullptr));
        Graph->setText(QApplication::translate("mainui", "\345\233\276\345\203\217\345\214\226\346\216\245\345\217\243\350\256\276\347\275\256", nullptr));
        Patchbay->setText(QApplication::translate("mainui", "\345\210\227\350\241\250\345\214\226\346\216\245\345\217\243\350\256\276\347\275\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("mainui", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainui: public Ui_mainui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINUI_H
