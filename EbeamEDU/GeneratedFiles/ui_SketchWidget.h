/********************************************************************************
** Form generated from reading UI file 'SketchWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKETCHWIDGET_H
#define UI_SKETCHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SketchWidget
{
public:
    QWidget *widget;

    void setupUi(QDockWidget *SketchWidget)
    {
        if (SketchWidget->objectName().isEmpty())
            SketchWidget->setObjectName(QStringLiteral("SketchWidget"));
        SketchWidget->resize(400, 300);
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        SketchWidget->setWidget(widget);

        retranslateUi(SketchWidget);

        QMetaObject::connectSlotsByName(SketchWidget);
    } // setupUi

    void retranslateUi(QDockWidget *SketchWidget)
    {
        SketchWidget->setWindowTitle(QApplication::translate("SketchWidget", "SketchWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SketchWidget: public Ui_SketchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKETCHWIDGET_H
