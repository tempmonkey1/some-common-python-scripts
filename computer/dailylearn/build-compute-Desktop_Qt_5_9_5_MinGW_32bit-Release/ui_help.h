/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_help
{
public:
    QLabel *label;
    QPushButton *OK;

    void setupUi(QWidget *help)
    {
        if (help->objectName().isEmpty())
            help->setObjectName(QStringLiteral("help"));
        help->resize(563, 300);
        label = new QLabel(help);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 20, 561, 111));
        OK = new QPushButton(help);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setGeometry(QRect(250, 220, 75, 23));

        retranslateUi(help);
        QObject::connect(OK, SIGNAL(clicked()), help, SLOT(close()));

        QMetaObject::connectSlotsByName(help);
    } // setupUi

    void retranslateUi(QWidget *help)
    {
        help->setWindowTitle(QApplication::translate("help", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("help", "1.\345\217\257\346\224\257\346\214\201\346\223\215\344\275\234 \345\237\272\346\234\254\350\277\220\347\256\227\357\274\214\345\260\217\346\225\260\357\274\214\350\264\237\346\225\260\357\274\214\346\213\254\345\217\267\344\274\230\345\205\210\343\200\202\n"
"2.\346\223\215\344\275\234\351\231\220\345\256\232 \346\211\200\346\234\211\350\277\220\347\256\227\347\232\206\344\270\272\350\277\220\347\256\227\347\254\246\345\234\250\344\270\244\344\270\252\344\275\215\346\225\260\347\232\204\344\270\255\351\227\264\344\275\215\357\274\214\n"
"\345\246\202\345\274\200\346\226\271\350\277\220\347\256\227\346\227\266\357\274\214\346\214\207\346\225\260\345\234\250\345\267\246\357\274\214\345\272\225\346\225\260\345\234\250\345\217\263\357\274\214\346\214\207\346\225\260\350\277\220\347\256\227\346\227\266\357\274\214\345\272\225\346\225\260\345\234\250\345\267\246\357\274\214\346\214\207\346\225\260\345\234\250\345\217\263\357\274\214log\350\277\220\347\256\227\346\227\266\345\272\225\346\225\260\345\234\250\345\267\246"
                        "\345\257\271\346\225\260\345\234\250\345\217\263\n"
"3.\346\224\257\346\214\201\345\244\247\351\203\250\345\210\206\346\214\211\351\222\256\347\232\204\345\277\253\346\215\267\351\224\256\357\274\214\342\210\232\343\200\201^\343\200\201log\350\277\220\347\256\227\347\254\246\344\276\213\345\244\226", Q_NULLPTR));
        OK->setText(QApplication::translate("help", "OK", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        OK->setShortcut(QApplication::translate("help", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class help: public Ui_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
