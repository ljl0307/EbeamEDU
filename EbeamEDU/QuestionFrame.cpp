#include "QuestionFrame.h"

QuestionFrame::QuestionFrame(QWidget *parent)
	: QFrame(parent)
{
	initialize();
}

QuestionFrame::~QuestionFrame()
{
}

void QuestionFrame::initialize()
{
	/*
	set the name of QuestionFrame
	*/
	this->setObjectName(QStringLiteral("question_frame"));

	this->resize(200, 300);
}
