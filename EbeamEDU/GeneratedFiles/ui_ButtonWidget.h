/********************************************************************************
** Form generated from reading UI file 'ButtonWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONWIDGET_H
#define UI_BUTTONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ButtonWidget
{
public:
    QWidget *widget;

    void setupUi(QDockWidget *ButtonWidget)
    {
        if (ButtonWidget->objectName().isEmpty())
            ButtonWidget->setObjectName(QStringLiteral("ButtonWidget"));
        ButtonWidget->resize(400, 300);
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        ButtonWidget->setWidget(widget);

        retranslateUi(ButtonWidget);

        QMetaObject::connectSlotsByName(ButtonWidget);
    } // setupUi

    void retranslateUi(QDockWidget *ButtonWidget)
    {
        ButtonWidget->setWindowTitle(QApplication::translate("ButtonWidget", "ButtonWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ButtonWidget: public Ui_ButtonWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONWIDGET_H
