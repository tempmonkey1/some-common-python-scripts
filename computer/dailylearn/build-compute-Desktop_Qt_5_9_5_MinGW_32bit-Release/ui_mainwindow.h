/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionj;
    QAction *actionb;
    QAction *actionj_2;
    QAction *actionhelp;
    QWidget *centralWidget;
    QTextBrowser *output;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *one;
    QPushButton *two;
    QPushButton *three;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *four;
    QPushButton *five;
    QPushButton *six;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *seven;
    QPushButton *eight;
    QPushButton *nine;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *zero_2;
    QPushButton *kuohao1;
    QPushButton *kuohao2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *add;
    QPushButton *sub;
    QPushButton *pro;
    QPushButton *divi;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *decimal;
    QPushButton *radical;
    QPushButton *Power;
    QPushButton *log;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *Backspace;
    QPushButton *clear;
    QPushButton *compute;
    QPushButton *close;
    QMenuBar *menuBar;
    QMenu *menub;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(435, 437);
        actionj = new QAction(MainWindow);
        actionj->setObjectName(QStringLiteral("actionj"));
        actionb = new QAction(MainWindow);
        actionb->setObjectName(QStringLiteral("actionb"));
        actionj_2 = new QAction(MainWindow);
        actionj_2->setObjectName(QStringLiteral("actionj_2"));
        actionhelp = new QAction(MainWindow);
        actionhelp->setObjectName(QStringLiteral("actionhelp"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        output = new QTextBrowser(centralWidget);
        output->setObjectName(QStringLiteral("output"));
        output->setGeometry(QRect(20, 20, 401, 29));
        output->setMinimumSize(QSize(0, 29));
        output->setMaximumSize(QSize(16777215, 29));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        output->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 71, 397, 254));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        one = new QPushButton(layoutWidget);
        one->setObjectName(QStringLiteral("one"));

        horizontalLayout->addWidget(one);

        two = new QPushButton(layoutWidget);
        two->setObjectName(QStringLiteral("two"));

        horizontalLayout->addWidget(two);

        three = new QPushButton(layoutWidget);
        three->setObjectName(QStringLiteral("three"));

        horizontalLayout->addWidget(three);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        four = new QPushButton(layoutWidget);
        four->setObjectName(QStringLiteral("four"));

        horizontalLayout_2->addWidget(four);

        five = new QPushButton(layoutWidget);
        five->setObjectName(QStringLiteral("five"));

        horizontalLayout_2->addWidget(five);

        six = new QPushButton(layoutWidget);
        six->setObjectName(QStringLiteral("six"));

        horizontalLayout_2->addWidget(six);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        seven = new QPushButton(layoutWidget);
        seven->setObjectName(QStringLiteral("seven"));

        horizontalLayout_3->addWidget(seven);

        eight = new QPushButton(layoutWidget);
        eight->setObjectName(QStringLiteral("eight"));

        horizontalLayout_3->addWidget(eight);

        nine = new QPushButton(layoutWidget);
        nine->setObjectName(QStringLiteral("nine"));

        horizontalLayout_3->addWidget(nine);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        zero_2 = new QPushButton(layoutWidget);
        zero_2->setObjectName(QStringLiteral("zero_2"));

        horizontalLayout_4->addWidget(zero_2);

        kuohao1 = new QPushButton(layoutWidget);
        kuohao1->setObjectName(QStringLiteral("kuohao1"));

        horizontalLayout_4->addWidget(kuohao1);

        kuohao2 = new QPushButton(layoutWidget);
        kuohao2->setObjectName(QStringLiteral("kuohao2"));

        horizontalLayout_4->addWidget(kuohao2);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        add = new QPushButton(layoutWidget);
        add->setObjectName(QStringLiteral("add"));

        horizontalLayout_5->addWidget(add);

        sub = new QPushButton(layoutWidget);
        sub->setObjectName(QStringLiteral("sub"));

        horizontalLayout_5->addWidget(sub);

        pro = new QPushButton(layoutWidget);
        pro->setObjectName(QStringLiteral("pro"));

        horizontalLayout_5->addWidget(pro);

        divi = new QPushButton(layoutWidget);
        divi->setObjectName(QStringLiteral("divi"));

        horizontalLayout_5->addWidget(divi);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        decimal = new QPushButton(layoutWidget);
        decimal->setObjectName(QStringLiteral("decimal"));

        horizontalLayout_6->addWidget(decimal);

        radical = new QPushButton(layoutWidget);
        radical->setObjectName(QStringLiteral("radical"));

        horizontalLayout_6->addWidget(radical);

        Power = new QPushButton(layoutWidget);
        Power->setObjectName(QStringLiteral("Power"));

        horizontalLayout_6->addWidget(Power);

        log = new QPushButton(layoutWidget);
        log->setObjectName(QStringLiteral("log"));

        horizontalLayout_6->addWidget(log);


        gridLayout->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        Backspace = new QPushButton(layoutWidget);
        Backspace->setObjectName(QStringLiteral("Backspace"));

        horizontalLayout_7->addWidget(Backspace);

        clear = new QPushButton(layoutWidget);
        clear->setObjectName(QStringLiteral("clear"));

        horizontalLayout_7->addWidget(clear);

        compute = new QPushButton(layoutWidget);
        compute->setObjectName(QStringLiteral("compute"));

        horizontalLayout_7->addWidget(compute);

        close = new QPushButton(layoutWidget);
        close->setObjectName(QStringLiteral("close"));

        horizontalLayout_7->addWidget(close);


        gridLayout->addLayout(horizontalLayout_7, 6, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 435, 23));
        menub = new QMenu(menuBar);
        menub->setObjectName(QStringLiteral("menub"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menub->menuAction());
        menub->addAction(actionj);
        menub->addAction(actionb);
        menub->addAction(actionj_2);
        menub->addAction(actionhelp);

        retranslateUi(MainWindow);
        QObject::connect(close, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(actionj, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actionb, SIGNAL(triggered()), log, SLOT(hide()));
        QObject::connect(actionb, SIGNAL(triggered()), radical, SLOT(hide()));
        QObject::connect(actionb, SIGNAL(triggered()), decimal, SLOT(hide()));
        QObject::connect(actionb, SIGNAL(triggered()), Power, SLOT(hide()));
        QObject::connect(actionj_2, SIGNAL(triggered()), Power, SLOT(show()));
        QObject::connect(actionj_2, SIGNAL(triggered()), log, SLOT(show()));
        QObject::connect(actionj_2, SIGNAL(triggered()), decimal, SLOT(show()));
        QObject::connect(actionj_2, SIGNAL(triggered()), radical, SLOT(show()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionj->setText(QApplication::translate("MainWindow", "\347\273\223\346\235\237", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionj->setShortcut(QApplication::translate("MainWindow", "Esc", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionb->setText(QApplication::translate("MainWindow", "\346\240\207\345\207\206\350\256\241\347\256\227\345\231\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionb->setToolTip(QApplication::translate("MainWindow", "\346\240\207\345\207\206\350\256\241\347\256\227\345\231\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionb->setShortcut(QApplication::translate("MainWindow", "F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionj_2->setText(QApplication::translate("MainWindow", "\346\211\251\345\261\225\350\256\241\347\256\227\345\231\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionj_2->setToolTip(QApplication::translate("MainWindow", "\346\211\251\345\261\225\350\256\241\347\256\227\345\231\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionj_2->setShortcut(QApplication::translate("MainWindow", "S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionhelp->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionhelp->setShortcut(QApplication::translate("MainWindow", "Alt+H", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        one->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        two->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        three->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        four->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        five->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        six->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        seven->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        eight->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        nine->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        zero_2->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        kuohao1->setText(QApplication::translate("MainWindow", "(", Q_NULLPTR));
        kuohao2->setText(QApplication::translate("MainWindow", ")", Q_NULLPTR));
        add->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        sub->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pro->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        divi->setText(QApplication::translate("MainWindow", "\303\267", Q_NULLPTR));
        decimal->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        radical->setText(QApplication::translate("MainWindow", "\342\210\232", Q_NULLPTR));
        Power->setText(QApplication::translate("MainWindow", "^", Q_NULLPTR));
        log->setText(QApplication::translate("MainWindow", "log", Q_NULLPTR));
        Backspace->setText(QApplication::translate("MainWindow", "\345\233\236\351\200\200", Q_NULLPTR));
        clear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", Q_NULLPTR));
        compute->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        compute->setShortcut(QApplication::translate("MainWindow", "Return, =", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        close->setText(QApplication::translate("MainWindow", "\347\273\223\346\235\237", Q_NULLPTR));
        menub->setTitle(QApplication::translate("MainWindow", "\350\217\234\345\215\225(Alt+&F)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
