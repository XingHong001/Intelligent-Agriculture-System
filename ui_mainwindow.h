/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelBuzzerIP;
    QLineEdit *lineEditBuzzerIP;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelFanIP;
    QLineEdit *lineEditFanIP;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTemp;
    QSpacerItem *horizontalSpacer_8;
    QProgressBar *progressBarTemp;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonTemp;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelHum;
    QSpacerItem *horizontalSpacer_9;
    QProgressBar *progressBarHum;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonHum;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelLight;
    QSpacerItem *horizontalSpacer_10;
    QProgressBar *progressBarLight;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonLight;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_11;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelMaxTemp;
    QSlider *horizontalSliderTemp;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelMaxHum;
    QSlider *horizontalSliderHum;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelMaxLight;
    QSlider *horizontalSliderLight;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_19;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButtonBlue;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonBuzzer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonGreen;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonFan;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(587, 890);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QLatin1String("#MainWindow{\n"
"border-image: url(:/images/background.jpg);\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 545, 821));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(true);
        font.setWeight(75);
        lcdNumber->setFont(font);
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setFrameShadow(QFrame::Sunken);
        lcdNumber->setDigitCount(22);

        verticalLayout->addWidget(lcdNumber);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        labelBuzzerIP = new QLabel(widget);
        labelBuzzerIP->setObjectName(QStringLiteral("labelBuzzerIP"));
        labelBuzzerIP->setMinimumSize(QSize(95, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        labelBuzzerIP->setFont(font1);
        labelBuzzerIP->setFrameShape(QFrame::NoFrame);
        labelBuzzerIP->setFrameShadow(QFrame::Raised);
        labelBuzzerIP->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(labelBuzzerIP);

        lineEditBuzzerIP = new QLineEdit(widget);
        lineEditBuzzerIP->setObjectName(QStringLiteral("lineEditBuzzerIP"));
        lineEditBuzzerIP->setMinimumSize(QSize(150, 35));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        lineEditBuzzerIP->setFont(font2);
        lineEditBuzzerIP->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lineEditBuzzerIP);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        labelFanIP = new QLabel(widget);
        labelFanIP->setObjectName(QStringLiteral("labelFanIP"));
        labelFanIP->setMinimumSize(QSize(95, 40));
        labelFanIP->setFont(font1);
        labelFanIP->setFrameShape(QFrame::NoFrame);
        labelFanIP->setFrameShadow(QFrame::Raised);
        labelFanIP->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(labelFanIP);

        lineEditFanIP = new QLineEdit(widget);
        lineEditFanIP->setObjectName(QStringLiteral("lineEditFanIP"));
        lineEditFanIP->setMinimumSize(QSize(150, 35));
        lineEditFanIP->setFont(font2);
        lineEditFanIP->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lineEditFanIP);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_4->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_13);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 60));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Raised);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_14);


        verticalLayout_4->addLayout(horizontalLayout_9);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelTemp = new QLabel(widget);
        labelTemp->setObjectName(QStringLiteral("labelTemp"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        labelTemp->setFont(font4);
        labelTemp->setFrameShape(QFrame::NoFrame);
        labelTemp->setFrameShadow(QFrame::Raised);
        labelTemp->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelTemp);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        progressBarTemp = new QProgressBar(widget);
        progressBarTemp->setObjectName(QStringLiteral("progressBarTemp"));
        progressBarTemp->setMinimumSize(QSize(380, 35));
        progressBarTemp->setFont(font4);
        progressBarTemp->setValue(24);
        progressBarTemp->setAlignment(Qt::AlignCenter);
        progressBarTemp->setTextVisible(true);

        horizontalLayout->addWidget(progressBarTemp);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        pushButtonTemp = new QPushButton(widget);
        pushButtonTemp->setObjectName(QStringLiteral("pushButtonTemp"));
        pushButtonTemp->setMinimumSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButtonTemp);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelHum = new QLabel(widget);
        labelHum->setObjectName(QStringLiteral("labelHum"));
        labelHum->setFont(font4);
        labelHum->setFrameShape(QFrame::NoFrame);
        labelHum->setFrameShadow(QFrame::Raised);
        labelHum->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelHum);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        progressBarHum = new QProgressBar(widget);
        progressBarHum->setObjectName(QStringLiteral("progressBarHum"));
        progressBarHum->setMinimumSize(QSize(380, 35));
        progressBarHum->setFont(font4);
        progressBarHum->setValue(24);
        progressBarHum->setAlignment(Qt::AlignCenter);
        progressBarHum->setTextVisible(true);

        horizontalLayout_2->addWidget(progressBarHum);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        pushButtonHum = new QPushButton(widget);
        pushButtonHum->setObjectName(QStringLiteral("pushButtonHum"));
        pushButtonHum->setMinimumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButtonHum);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelLight = new QLabel(widget);
        labelLight->setObjectName(QStringLiteral("labelLight"));
        labelLight->setFont(font4);
        labelLight->setFrameShape(QFrame::NoFrame);
        labelLight->setFrameShadow(QFrame::Raised);
        labelLight->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelLight);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        progressBarLight = new QProgressBar(widget);
        progressBarLight->setObjectName(QStringLiteral("progressBarLight"));
        progressBarLight->setMinimumSize(QSize(380, 35));
        progressBarLight->setFont(font4);
        progressBarLight->setMinimum(0);
        progressBarLight->setMaximum(100);
        progressBarLight->setValue(24);
        progressBarLight->setAlignment(Qt::AlignCenter);
        progressBarLight->setTextVisible(true);

        horizontalLayout_3->addWidget(progressBarLight);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        pushButtonLight = new QPushButton(widget);
        pushButtonLight->setObjectName(QStringLiteral("pushButtonLight"));
        pushButtonLight->setMinimumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(pushButtonLight);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(60, 60));
        pushButton_2->setStyleSheet(QLatin1String("border-image: url(:/images/set.png);\n"
"border-image: url(:/images/max.png);"));

        horizontalLayout_8->addWidget(pushButton_2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 60));
        label_2->setFont(font3);
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setFrameShadow(QFrame::Raised);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(60, 60));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/images/set.png);"));

        horizontalLayout_8->addWidget(pushButton);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);


        verticalLayout_4->addLayout(horizontalLayout_8);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelMaxTemp = new QLabel(widget);
        labelMaxTemp->setObjectName(QStringLiteral("labelMaxTemp"));
        labelMaxTemp->setMinimumSize(QSize(0, 40));
        labelMaxTemp->setFont(font4);
        labelMaxTemp->setFrameShape(QFrame::NoFrame);
        labelMaxTemp->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(labelMaxTemp);

        horizontalSliderTemp = new QSlider(widget);
        horizontalSliderTemp->setObjectName(QStringLiteral("horizontalSliderTemp"));
        horizontalSliderTemp->setMinimumSize(QSize(380, 20));
        horizontalSliderTemp->setMouseTracking(false);
        horizontalSliderTemp->setMaximum(100);
        horizontalSliderTemp->setValue(100);
        horizontalSliderTemp->setTracking(true);
        horizontalSliderTemp->setOrientation(Qt::Horizontal);
        horizontalSliderTemp->setInvertedAppearance(false);
        horizontalSliderTemp->setInvertedControls(false);

        horizontalLayout_4->addWidget(horizontalSliderTemp);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelMaxHum = new QLabel(widget);
        labelMaxHum->setObjectName(QStringLiteral("labelMaxHum"));
        labelMaxHum->setMinimumSize(QSize(0, 40));
        labelMaxHum->setFont(font4);
        labelMaxHum->setFrameShape(QFrame::NoFrame);
        labelMaxHum->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(labelMaxHum);

        horizontalSliderHum = new QSlider(widget);
        horizontalSliderHum->setObjectName(QStringLiteral("horizontalSliderHum"));
        horizontalSliderHum->setMinimumSize(QSize(380, 20));
        horizontalSliderHum->setMaximum(100);
        horizontalSliderHum->setValue(100);
        horizontalSliderHum->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSliderHum);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        labelMaxLight = new QLabel(widget);
        labelMaxLight->setObjectName(QStringLiteral("labelMaxLight"));
        labelMaxLight->setMinimumSize(QSize(0, 40));
        labelMaxLight->setFont(font4);
        labelMaxLight->setFrameShape(QFrame::NoFrame);
        labelMaxLight->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(labelMaxLight);

        horizontalSliderLight = new QSlider(widget);
        horizontalSliderLight->setObjectName(QStringLiteral("horizontalSliderLight"));
        horizontalSliderLight->setMinimumSize(QSize(380, 20));
        horizontalSliderLight->setMaximum(100);
        horizontalSliderLight->setValue(100);
        horizontalSliderLight->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSliderLight);


        verticalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_18);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(0, 60));
        label_7->setFont(font3);
        label_7->setFrameShape(QFrame::NoFrame);
        label_7->setFrameShadow(QFrame::Raised);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_7);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_19);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(60, 40));
        label_3->setFont(font4);
        label_3->setFrameShape(QFrame::Box);
        label_3->setFrameShadow(QFrame::Raised);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_3);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_17);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(60, 40));
        label_4->setFont(font4);
        label_4->setFrameShape(QFrame::Box);
        label_4->setFrameShadow(QFrame::Raised);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_4);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_15);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(60, 40));
        label_5->setFont(font4);
        label_5->setFrameShape(QFrame::Box);
        label_5->setFrameShadow(QFrame::Raised);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_5);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_16);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(60, 40));
        label_6->setFont(font4);
        label_6->setFrameShape(QFrame::Box);
        label_6->setFrameShadow(QFrame::Raised);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_6);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        pushButtonBlue = new QPushButton(widget);
        pushButtonBlue->setObjectName(QStringLiteral("pushButtonBlue"));
        pushButtonBlue->setMinimumSize(QSize(60, 60));
        pushButtonBlue->setMaximumSize(QSize(60, 60));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221"));
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setWeight(75);
        pushButtonBlue->setFont(font5);
        pushButtonBlue->setStyleSheet(QStringLiteral("border-image: url(:/images/ledblack.png);"));

        horizontalLayout_10->addWidget(pushButtonBlue);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        pushButtonBuzzer = new QPushButton(widget);
        pushButtonBuzzer->setObjectName(QStringLiteral("pushButtonBuzzer"));
        pushButtonBuzzer->setMinimumSize(QSize(60, 60));
        pushButtonBuzzer->setMaximumSize(QSize(60, 60));
        pushButtonBuzzer->setFont(font5);
        pushButtonBuzzer->setStyleSheet(QStringLiteral("border-image: url(:/images/buzzeroff.png);"));

        horizontalLayout_10->addWidget(pushButtonBuzzer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        pushButtonGreen = new QPushButton(widget);
        pushButtonGreen->setObjectName(QStringLiteral("pushButtonGreen"));
        pushButtonGreen->setMinimumSize(QSize(60, 60));
        pushButtonGreen->setMaximumSize(QSize(60, 60));
        pushButtonGreen->setFont(font5);
        pushButtonGreen->setStyleSheet(QStringLiteral("border-image: url(:/images/ledblack.png);"));

        horizontalLayout_10->addWidget(pushButtonGreen);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        pushButtonFan = new QPushButton(widget);
        pushButtonFan->setObjectName(QStringLiteral("pushButtonFan"));
        pushButtonFan->setMinimumSize(QSize(60, 60));
        pushButtonFan->setMaximumSize(QSize(60, 60));
        pushButtonFan->setFont(font5);
        pushButtonFan->setStyleSheet(QStringLiteral("border-image: url(:/images/fanoff.png);"));

        horizontalLayout_10->addWidget(pushButtonFan);


        verticalLayout_4->addLayout(horizontalLayout_10);

        MainWindow->setCentralWidget(centralWidget);
        lcdNumber->raise();
        pushButton->raise();
        label_2->raise();
        label->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 587, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\231\272\350\203\275\345\256\266\345\261\205\347\263\273\347\273\237", 0));
        labelBuzzerIP->setText(QApplication::translate("MainWindow", "\350\234\202\351\270\243\345\231\250IP:", 0));
        lineEditBuzzerIP->setPlaceholderText(QApplication::translate("MainWindow", "\350\276\223\345\205\245\350\234\202\351\270\243\345\231\250IP", 0));
        labelFanIP->setText(QApplication::translate("MainWindow", "\351\243\216\346\211\207IP:", 0));
        lineEditFanIP->setPlaceholderText(QApplication::translate("MainWindow", "\350\276\223\345\205\245\351\243\216\346\211\207IP", 0));
        label->setText(QApplication::translate("MainWindow", "\345\256\244 \345\206\205 \347\216\257 \345\242\203 \344\277\241 \346\201\257", 0));
        labelTemp->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\346\270\251 \345\272\246:</p></body></html>", 0));
        progressBarTemp->setFormat(QApplication::translate("MainWindow", "%p", 0));
        pushButtonTemp->setText(QString());
        labelHum->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\346\271\277 \345\272\246:</p></body></html>", 0));
        progressBarHum->setFormat(QApplication::translate("MainWindow", "%p", 0));
        pushButtonHum->setText(QString());
        labelLight->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\345\205\211 \347\205\247:</p></body></html>", 0));
        progressBarLight->setFormat(QApplication::translate("MainWindow", "%p", 0));
        pushButtonLight->setText(QString());
        pushButton_2->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\351\230\210 \345\200\274 \350\256\276 \347\275\256", 0));
        pushButton->setText(QString());
        labelMaxTemp->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\346\270\251\345\272\246\351\230\210\345\200\274:100</p></body></html>", 0));
        labelMaxHum->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\346\271\277\345\272\246\351\230\210\345\200\274:100</p></body></html>", 0));
        labelMaxLight->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\345\205\211\347\205\247\351\230\210\345\200\274:100</p></body></html>", 0));
        label_7->setText(QApplication::translate("MainWindow", "\350\277\234 \347\250\213 \346\216\247 \345\210\266", 0));
        label_3->setText(QApplication::translate("MainWindow", "\350\223\235\347\201\257", 0));
        label_4->setText(QApplication::translate("MainWindow", "\350\255\246\346\212\245", 0));
        label_5->setText(QApplication::translate("MainWindow", "\347\273\277\347\201\257", 0));
        label_6->setText(QApplication::translate("MainWindow", "\347\251\272\350\260\203", 0));
        pushButtonBlue->setText(QString());
        pushButtonBuzzer->setText(QString());
        pushButtonGreen->setText(QString());
        pushButtonFan->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
