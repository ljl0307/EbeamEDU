#include "EbeamEDU.h"

EbeamEDU::EbeamEDU(QWidget *parent)
	: QMainWindow(parent)
{
	initialize();

	
}

/*
initialize the MainWindow
*/
void EbeamEDU::initialize()
{
	/*
	set the name of QMainWindow
	*/
	this->setObjectName(QStringLiteral("EbeamEDU"));

	/*
	set the window title of EBeamEDU
	*/
	this->setWindowTitle(QStringLiteral("EbeamEDU"));

	/*
	set the init size of EbeamEDU
	*/
	this->resize(600, 400);

	/*
	set the central widget
	*/
	central_widget = new QWidget(this);
	central_widget->setObjectName(QStringLiteral("central_widget"));

	/*
	add the central widget for mainWindow
	*/
	this->setCentralWidget(central_widget);

	/*
	set the layout vertical
	*/
	vertical_layout_main = setVerticalLayout(central_widget);
	vertical_layout_main->setObjectName(QStringLiteral("vertical_layout_main"));

	/*
	set the question_frame
	*/
	question_frame = new QuestionFrame(central_widget);
	question_frame->setObjectName(QStringLiteral("question_frame"));

	/*
	add the frame into the layout
	*/
	vertical_layout_main->addWidget(question_frame);

	/*
	set the sketch_widget
	*/
	sketch_widget = new SketchWidget(this);
	sketch_widget->setObjectName(QStringLiteral("sketch_widget"));
	this->addDockWidget(static_cast<Qt::DockWidgetArea>(2), sketch_widget);

	/*
	set the button_widget
	*/
	button_widget = new ButtonWidget(this);
	button_widget->setObjectName(QStringLiteral("button_widget"));
	this->addDockWidget(static_cast<Qt::DockWidgetArea>(8), button_widget);

}

QVBoxLayout* EbeamEDU::setVerticalLayout(QWidget *parent)
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
