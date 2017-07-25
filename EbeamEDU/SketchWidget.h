#pragma once

#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QDockWidget>
#include <QString>
#include "SketchFrame.h"


class SketchWidget : public QDockWidget
{
	Q_OBJECT

public:
	SketchWidget(QWidget *parent = Q_NULLPTR);
	~SketchWidget();

	void initialize();

private:
	SketchFrame *sketch_frame;
	QWidget *sketch_widget_contents;
	QVBoxLayout *vertical_layout_sketch;

private:
	QVBoxLayout* setVerticalLayout(QWidget *parent);
};
