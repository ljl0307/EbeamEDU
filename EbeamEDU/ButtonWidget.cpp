#include "ButtonWidget.h"

ButtonWidget::ButtonWidget(QWidget *parent)
	: QDockWidget(parent)
{
	intialize();
}

ButtonWidget::~ButtonWidget()
{
}

void ButtonWidget::intialize()
{
	this->resize(500, 100);

	/*
	set the widget contents
	*/
	button_widget_contents = new QWidget();
	button_widget_contents->setObjectName(QStringLiteral("button_widget_contents"));
	this->setWidget(button_widget_contents);

	/*
	set the layout of sketch_widget
	*/
	vertical_layout_button = setVerticalLayout(this);
	vertical_layout_button->setObjectName(QStringLiteral("vertical_layout_button"));
}

QVBoxLayout * ButtonWidget::setVerticalLayout(QWidget * parent)
{
	QVBoxLayout *vertical_layout = new QVBoxLayout(parent);

	/*
	set the spacing in the layout
	*/
	vertical_layout->setSpacing(6);

	/*
	set the spacing around the layout
	*/
	vertical_layout->setContentsMargins(11, 11, 11, 11);

	return vertical_layout;
}
