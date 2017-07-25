#ifndef EBEAMEDU_H
#define EBEAMEDU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <QString>

#include "SketchWidget.h"
#include "ButtonWidget.h"
#include "QuestionFrame.h"

class EbeamEDU : public QMainWindow
{
	Q_OBJECT

public:
	EbeamEDU(QWidget *parent = Q_NULLPTR);

	void initialize();

private:
	QWidget *central_widget;
	SketchWidget *sketch_widget;
	ButtonWidget *button_widget;
	QVBoxLayout *vertical_layout_main;
	QuestionFrame *question_frame;
	
private:
	QVBoxLayout* setVerticalLayout(QWidget *parent);
};

#endif
