#include "ButtonFrame.h"

ButtonFrame::ButtonFrame(QWidget *parent)
	: QWidget(parent)
{
	initialize();
}

ButtonFrame::~ButtonFrame()
{
}

void ButtonFrame::initialize()
{
	/*
	set the name of ButtonFrame
	*/
	this->setObjectName(QStringLiteral("button_frame"));
}
