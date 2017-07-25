#pragma once

#include <QFrame>


class QuestionFrame : public QFrame
{
	Q_OBJECT

public:
	QuestionFrame(QWidget *parent = Q_NULLPTR);
	~QuestionFrame();

	void initialize();

private:
	
};
