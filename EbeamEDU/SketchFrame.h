#pragma once

#include <QWidget>


class SketchFrame : public QWidget
{
	Q_OBJECT

public:
	SketchFrame(QWidget *parent = Q_NULLPTR);
	~SketchFrame();

	void initialize();

private:
	
};
