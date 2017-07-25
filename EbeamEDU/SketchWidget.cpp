#include "SketchWidget.h"

SketchWidget::SketchWidget(QWidget *parent)
	: QDockWidget(parent)
{
	initialize();
}

SketchWidget::~SketchWidget()
{
}

void SketchWidget::initialize()
{
	this->resize(200,300);

	/*
	set the widget contents
	*/
	sketch_widget_contents = new QWidget();
	sketch_widget_contents->setObjectName(QStringLiteral("sketch_widget_contents"));
	this->setWidget(sketch_widget_contents);

	/*
	set the layout of sketch_widget
	*/
	vertical_layout_sketch = setVerticalLayout(this);
	vertical_layout_sketch->setObjectName(QStringLiteral("vertical_layout_sketch"));
}

QVBoxLayout * SketchWidget::setVerticalLayout(QWidget * parent)
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
