#pragma once

#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QDockWidget>
#include "ButtonFrame.h"


class ButtonWidget : public QDockWidget
{
	Q_OBJECT

public:
	ButtonWidget(QWidget *parent = Q_NULLPTR);
	~ButtonWidget();

	void intialize();

private:
	ButtonFrame *button_frame;
	QWidget *button_widget_contents;
	QVBoxLayout *vertical_layout_button;

private:
	QVBoxLayout* setVerticalLayout(QWidget *parent);

};
