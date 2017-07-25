#include "SketchFrame.h"

SketchFrame::SketchFrame(QWidget *parent)
	: QWidget(parent)
{
	initialize();
}

SketchFrame::~SketchFrame()
{
}

void SketchFrame::initialize()
{
	/*
	set the name of SketchFrame
	*/
	this->setObjectName(QStringLiteral("sketch_frame"));
}
