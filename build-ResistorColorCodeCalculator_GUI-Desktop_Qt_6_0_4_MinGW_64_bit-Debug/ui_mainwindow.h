/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *calculator;
    QPushButton *settings;
    QPushButton *about;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QComboBox *comboBox_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QComboBox *comboBox_4;
    QVBoxLayout *verticalLayout_10;
    QGraphicsView *resistorDisplay;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *home;
    QPushButton *about_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_12;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_8;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *home_2;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_5;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *groupBox;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *home_3;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(232, 232, 232);\n"
""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, 40);
        verticalSpacer_2 = new QSpacerItem(20, 136, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        calculator = new QPushButton(page);
        calculator->setObjectName(QString::fromUtf8("calculator"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(calculator->sizePolicy().hasHeightForWidth());
        calculator->setSizePolicy(sizePolicy);
        calculator->setMinimumSize(QSize(460, 85));
        calculator->setMaximumSize(QSize(460, 85));
        calculator->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color:none;\n"
"	 border-color :rgb(108, 176, 168);\n"
"	 color: rgb(108, 176, 168);\n"
"      border-style:solid;\n"
"      border-width:2px;\n"
"      font:  24px; \n"
"  }\n"
"  QPushButton:hover:!pressed { \n"
"	\n"
"	background-color: rgb(108, 176, 168);\n"
"	color: rgb(255, 255, 255);\n"
"  }"));

        verticalLayout_2->addWidget(calculator);

        settings = new QPushButton(page);
        settings->setObjectName(QString::fromUtf8("settings"));
        sizePolicy.setHeightForWidth(settings->sizePolicy().hasHeightForWidth());
        settings->setSizePolicy(sizePolicy);
        settings->setMinimumSize(QSize(460, 85));
        settings->setMaximumSize(QSize(460, 85));
        settings->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color:none;\n"
"	 border-color :rgb(108, 176, 168);\n"
"	 color: rgb(108, 176, 168);\n"
"      border-style:solid;\n"
"      border-width:2px;\n"
"      font:  24px; \n"
"  }\n"
"  QPushButton:hover:!pressed { \n"
"	\n"
"	background-color: rgb(108, 176, 168);\n"
"	color: rgb(255, 255, 255);\n"
"  }"));

        verticalLayout_2->addWidget(settings);

        about = new QPushButton(page);
        about->setObjectName(QString::fromUtf8("about"));
        sizePolicy.setHeightForWidth(about->sizePolicy().hasHeightForWidth());
        about->setSizePolicy(sizePolicy);
        about->setMinimumSize(QSize(460, 85));
        about->setMaximumSize(QSize(460, 85));
        about->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color:none;\n"
"	 border-color :rgb(108, 176, 168);\n"
"	 color: rgb(108, 176, 168);\n"
"      border-style:solid;\n"
"      border-width:2px;\n"
"      font:  24px; \n"
"  }\n"
"  QPushButton:hover:!pressed { \n"
"	\n"
"	background-color: rgb(108, 176, 168);\n"
"	color: rgb(255, 255, 255);\n"
"  }"));

        verticalLayout_2->addWidget(about);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 135, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_11 = new QVBoxLayout(page_2);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(20);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(240, 40));
        label_2->setMaximumSize(QSize(240, 40));
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_9->addWidget(label_2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(12);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(240, 24));
        label_3->setMaximumSize(QSize(16777215, 24));
        QFont font1;
        font1.setPointSize(14);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(label_3);

        comboBox = new QComboBox(page_2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/button_icons/icons/square_0.png"), QSize(), QIcon::Normal, QIcon::On);
        comboBox->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/button_icons/icons/square_1.png"), QSize(), QIcon::Normal, QIcon::On);
        comboBox->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/button_icons/icons/square_2.png"), QSize(), QIcon::Normal, QIcon::On);
        comboBox->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/button_icons/icons/square_3.png"), QSize(), QIcon::Normal, QIcon::On);
        comboBox->addItem(icon3, QString());
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/button_icons/icons/square_4.png"), QSize(), QIcon::Normal, QIcon::On);
        comboBox->addItem(icon4, QString());
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/button_icons/icons/square_5.png"), QSize(), QIcon::Normal, QIcon::On);
        comboBox->addItem(icon5, QString());
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/button_icons/icons/square_6.png"), QSize(), QIcon::Normal, QIcon::On);
        comboBox->addItem(icon6, QString());
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/button_icons/icons/square_7.png"), QSize(), QIcon::Normal, QIcon::On);
        comboBox->addItem(icon7, QString());
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/button_icons/icons/square_8.png"), QSize(), QIcon::Normal, QIcon::On);
        comboBox->addItem(icon8, QString());
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/button_icons/icons/square_9.png"), QSize(), QIcon::Normal, QIcon::On);
        comboBox->addItem(icon9, QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(0, 30));
        comboBox->setMaximumSize(QSize(16777215, 30));
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QString::fromUtf8("  QComboBox {\n"
"	 background-color:none;\n"
"	 border-color :rgb(108, 176, 168);\n"
"	color: rgb(0, 0 0);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"  }\n"
"\n"
"  QComboBox:hover { \n"
"	background-color: rgb(108, 176, 168);\n"
"	color: rgb(255, 255, 255);\n"
"  }"));
        comboBox->setInsertPolicy(QComboBox::NoInsert);
        comboBox->setIconSize(QSize(24, 24));

        verticalLayout_4->addWidget(comboBox);


        verticalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(240, 24));
        label_4->setMaximumSize(QSize(16777215, 24));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_5->addWidget(label_4);

        comboBox_2 = new QComboBox(page_2);
        comboBox_2->addItem(icon, QString());
        comboBox_2->addItem(icon1, QString());
        comboBox_2->addItem(icon2, QString());
        comboBox_2->addItem(icon3, QString());
        comboBox_2->addItem(icon4, QString());
        comboBox_2->addItem(icon5, QString());
        comboBox_2->addItem(icon6, QString());
        comboBox_2->addItem(icon7, QString());
        comboBox_2->addItem(icon8, QString());
        comboBox_2->addItem(icon9, QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(240, 30));
        comboBox_2->setMaximumSize(QSize(16777215, 30));
        comboBox_2->setFont(font1);
        comboBox_2->setStyleSheet(QString::fromUtf8("  QComboBox {\n"
"	 background-color:none;\n"
"	 border-color :rgb(108, 176, 168);\n"
"	color: rgb(0, 0 0);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"  }\n"
"\n"
"  QComboBox:hover { \n"
"	background-color: rgb(108, 176, 168);\n"
"	color: rgb(255, 255, 255);\n"
"  }"));
        comboBox_2->setInsertPolicy(QComboBox::NoInsert);
        comboBox_2->setIconSize(QSize(24, 24));

        verticalLayout_5->addWidget(comboBox_2);


        verticalLayout_8->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(10);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(240, 24));
        label_5->setMaximumSize(QSize(16777215, 24));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_6->addWidget(label_5);

        comboBox_3 = new QComboBox(page_2);
        comboBox_3->addItem(icon, QString());
        comboBox_3->addItem(icon1, QString());
        comboBox_3->addItem(icon2, QString());
        comboBox_3->addItem(icon3, QString());
        comboBox_3->addItem(icon4, QString());
        comboBox_3->addItem(icon5, QString());
        comboBox_3->addItem(icon6, QString());
        comboBox_3->addItem(icon7, QString());
        comboBox_3->addItem(icon8, QString());
        comboBox_3->addItem(icon9, QString());
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/button_icons/icons/square_10.png"), QSize(), QIcon::Normal, QIcon::On);
        comboBox_3->addItem(icon10, QString());
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/button_icons/icons/square_11.png"), QSize(), QIcon::Normal, QIcon::On);
        comboBox_3->addItem(icon11, QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setMinimumSize(QSize(240, 30));
        comboBox_3->setMaximumSize(QSize(16777215, 30));
        comboBox_3->setFont(font1);
        comboBox_3->setStyleSheet(QString::fromUtf8("  QComboBox {\n"
"	 background-color:none;\n"
"	 border-color :rgb(108, 176, 168);\n"
"	color: rgb(0, 0 0);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"  }\n"
"\n"
"  QComboBox:hover { \n"
"	background-color: rgb(108, 176, 168);\n"
"	color: rgb(255, 255, 255);\n"
"  }"));
        comboBox_3->setInsertPolicy(QComboBox::NoInsert);
        comboBox_3->setIconSize(QSize(24, 24));

        verticalLayout_6->addWidget(comboBox_3);


        verticalLayout_8->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(10);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(240, 24));
        label_6->setMaximumSize(QSize(16777215, 24));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_7->addWidget(label_6);

        comboBox_4 = new QComboBox(page_2);
        comboBox_4->addItem(icon1, QString());
        comboBox_4->addItem(icon2, QString());
        comboBox_4->addItem(icon5, QString());
        comboBox_4->addItem(icon6, QString());
        comboBox_4->addItem(icon7, QString());
        comboBox_4->addItem(icon8, QString());
        comboBox_4->addItem(icon10, QString());
        comboBox_4->addItem(icon11, QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setMinimumSize(QSize(240, 30));
        comboBox_4->setMaximumSize(QSize(16777215, 30));
        comboBox_4->setFont(font1);
        comboBox_4->setStyleSheet(QString::fromUtf8("  QComboBox {\n"
"	 background-color:none;\n"
"	 border-color :rgb(108, 176, 168);\n"
"	color: rgb(0, 0 0);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"  }\n"
"\n"
"  QComboBox:hover { \n"
"	background-color: rgb(108, 176, 168);\n"
"	color: rgb(255, 255, 255);\n"
"  }"));
        comboBox_4->setInsertPolicy(QComboBox::NoInsert);
        comboBox_4->setIconSize(QSize(24, 24));

        verticalLayout_7->addWidget(comboBox_4);


        verticalLayout_8->addLayout(verticalLayout_7);


        verticalLayout_9->addLayout(verticalLayout_8);


        horizontalLayout_3->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(20);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        resistorDisplay = new QGraphicsView(page_2);
        resistorDisplay->setObjectName(QString::fromUtf8("resistorDisplay"));
        resistorDisplay->setMinimumSize(QSize(480, 280));
        resistorDisplay->setMaximumSize(QSize(480, 280));

        verticalLayout_10->addWidget(resistorDisplay);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(180, 36));
        label->setMaximumSize(QSize(180, 36));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(320, 0));
        lineEdit->setMaximumSize(QSize(320, 16777215));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("  QLineEdit {\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"  }\n"
""));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_10->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_10);


        verticalLayout_11->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        home = new QPushButton(page_2);
        home->setObjectName(QString::fromUtf8("home"));
        home->setMinimumSize(QSize(100, 30));
        home->setMaximumSize(QSize(100, 30));
        home->setFont(font1);
        home->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color:none;\n"
"	 border-color :rgb(108, 176, 168);\n"
"	 color: rgb(108, 176, 168);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"  }\n"
"  QPushButton:hover:!pressed { \n"
"	\n"
"	background-color: rgb(108, 176, 168);\n"
"	color: rgb(255, 255, 255);\n"
"  }"));

        horizontalLayout_4->addWidget(home);

        about_2 = new QPushButton(page_2);
        about_2->setObjectName(QString::fromUtf8("about_2"));
        about_2->setMinimumSize(QSize(100, 30));
        about_2->setMaximumSize(QSize(100, 30));
        about_2->setFont(font1);
        about_2->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color:none;\n"
"	 border-color :rgb(108, 176, 168);\n"
"	 color: rgb(108, 176, 168);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"  }\n"
"  QPushButton:hover:!pressed { \n"
"	\n"
"	background-color: rgb(108, 176, 168);\n"
"	color: rgb(255, 255, 255);\n"
"  }"));

        horizontalLayout_4->addWidget(about_2);

        horizontalSpacer_4 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_11->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 196, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_11->addItem(verticalSpacer_4);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_12 = new QVBoxLayout(page_3);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_6);

        label_8 = new QLabel(page_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(240, 40));
        label_8->setMaximumSize(QSize(16777215, 40));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8(""));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(label_8);

        textEdit = new QTextEdit(page_3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_12->addWidget(textEdit);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        home_2 = new QPushButton(page_3);
        home_2->setObjectName(QString::fromUtf8("home_2"));
        home_2->setMinimumSize(QSize(100, 30));
        home_2->setMaximumSize(QSize(100, 30));
        home_2->setFont(font1);
        home_2->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color:none;\n"
"	 border-color :rgb(108, 176, 168);\n"
"	 color: rgb(108, 176, 168);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"  }\n"
"  QPushButton:hover:!pressed { \n"
"	\n"
"	background-color: rgb(108, 176, 168);\n"
"	color: rgb(255, 255, 255);\n"
"  }"));

        horizontalLayout_5->addWidget(home_2);

        horizontalSpacer_8 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        verticalLayout_12->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_5);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_13 = new QVBoxLayout(page_4);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        groupBox = new QGroupBox(page_4);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);

        verticalLayout_13->addWidget(groupBox);

        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_13->addItem(verticalSpacer_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        home_3 = new QPushButton(page_4);
        home_3->setObjectName(QString::fromUtf8("home_3"));
        home_3->setMinimumSize(QSize(100, 30));
        home_3->setMaximumSize(QSize(100, 30));
        home_3->setFont(font1);
        home_3->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color:none;\n"
"	 border-color :rgb(108, 176, 168);\n"
"	 color: rgb(108, 176, 168);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"  }\n"
"  QPushButton:hover:!pressed { \n"
"	\n"
"	background-color: rgb(108, 176, 168);\n"
"	color: rgb(255, 255, 255);\n"
"  }"));

        horizontalLayout_6->addWidget(home_3);

        horizontalSpacer_10 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);


        verticalLayout_13->addLayout(horizontalLayout_6);

        verticalSpacer_8 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_13->addItem(verticalSpacer_8);

        stackedWidget->addWidget(page_4);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        comboBox->setCurrentIndex(0);
        comboBox_2->setCurrentIndex(0);
        comboBox_3->setCurrentIndex(0);
        comboBox_4->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Resistor Calculator", nullptr));
        calculator->setText(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        settings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        about->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline;\">4 Band Resistor</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "1st Band of Color", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Black [ 0 ]", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Brown [ 1 ]", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Red [ 2 ]", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Orange [ 3 ]", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Yellow [ 4 ]", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Green [ 5 ]", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "Blue [ 6 ]", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "Violet [ 7 ]", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("MainWindow", "Grey [ 8 ]", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("MainWindow", "White [ 9 ]", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "2nd Band of Color", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "Black [ 0 ]", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Brown [ 1 ]", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "Red [ 2 ]", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "Orange [ 3 ]", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("MainWindow", "Yellow [ 4 ]", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("MainWindow", "Green [ 5 ]", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("MainWindow", "Blue [ 6 ]", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("MainWindow", "Violet [ 7 ]", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("MainWindow", "Grey [ 8 ]", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("MainWindow", "White [ 9 ]", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "Multiplier", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "Black [ x1 Ohm ]", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "Brown [ x10 Ohm ]", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "Red [ x100 Ohm ]", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("MainWindow", "Orange [ x1 KOhm ]", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("MainWindow", "Yellow [ x10 KOhm ]", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("MainWindow", "Green [ x100 KOhm ]", nullptr));
        comboBox_3->setItemText(6, QCoreApplication::translate("MainWindow", "Blue [ x1 MOhm ]", nullptr));
        comboBox_3->setItemText(7, QCoreApplication::translate("MainWindow", "Violet [ x10 MOhm ]", nullptr));
        comboBox_3->setItemText(8, QCoreApplication::translate("MainWindow", "Grey [ x100 MOhm ]", nullptr));
        comboBox_3->setItemText(9, QCoreApplication::translate("MainWindow", "White [ x1 GOhm ]", nullptr));
        comboBox_3->setItemText(10, QCoreApplication::translate("MainWindow", "Gold [ x0.1 Ohm]", nullptr));
        comboBox_3->setItemText(11, QCoreApplication::translate("MainWindow", "Silver [ x0.01 Ohm ]", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow", "Tolerance", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "Brown [ 1% ]", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow", "Red [ 2 % ]", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("MainWindow", "Green [ 0.5%  ]", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("MainWindow", "Blue [ 0.25%  ]", nullptr));
        comboBox_4->setItemText(4, QCoreApplication::translate("MainWindow", "Violet [ 0.1% ]", nullptr));
        comboBox_4->setItemText(5, QCoreApplication::translate("MainWindow", "Grey [ 0.05% ]", nullptr));
        comboBox_4->setItemText(6, QCoreApplication::translate("MainWindow", "Gold [ 5% ]", nullptr));
        comboBox_4->setItemText(7, QCoreApplication::translate("MainWindow", "Silver [ 10% ]", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "Resistor Value:", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        home->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        about_2->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">About</span></p></body></html>", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Application name:  4 Band Resistor Color Code Calculator</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Date: 03.10.2021</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">-------------------------------</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; marg"
                        "in-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Author: Cri\310\231u Radu Andrei</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">email: crisuraduandrei@gmail.com</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">--------------------------------</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Using: Qt Framework</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">--------------------------------</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inde"
                        "nt:0; text-indent:0px;\"><span style=\" font-size:14pt;\">License: GNU Lesser General Public License v2.1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">License text and source code at : </span><a href=\"https://github.com/andrei-crisu/ResistorColorCodeCalculator\"><span style=\" font-size:14pt; text-decoration: underline; color:#007af4;\">https://github.com/andrei-crisu/ResistorColorCodeCalculator</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">--------------------------------</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; text-decoration: underline;\">Other resources:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; ma"
                        "rgin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">	- icons and images: </span><a href=\"&lt;div&gt;Icons made by &lt;a href=\"><span style=\" font-size:14pt; text-decoration: underline; color:#007af4;\">Vitaly Gorbachev</span></a><span style=\" font-size:14pt;\"> from </span><a href=\"https://www.flaticon.com/\"><span style=\" font-size:14pt; text-decoration: underline; color:#007af4;\">www.flaticon.com</span></a><span style=\" font-size:14pt;\">&quot;&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Icons made by </span><a href=\"https://www.flaticon.com/authors/vitaly-gorbachev\"><span style=\" font-size:14pt; text-decoration: underline; color:#007af4;\">Vitaly Gorbachev</span></a><span style=\" font-size:14pt;\"> from </span><a href=\"https://www.flaticon.com/\"><span style=\" font-size:14pt; text-decoration: underline; color:#007af4;\">www.flatico"
                        "n.com</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">	-information about resistor color code: </span><a href=\"https://www.digikey.ro/\"><span style=\" font-size:14pt; text-decoration: underline; color:#007af4;\">https://www.digikey.ro/</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">--------------------------------</span></p></body></html>", nullptr));
        home_2->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        groupBox->setTitle(QString());
        home_3->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
