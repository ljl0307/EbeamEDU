#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_EbeamEDU.h"

class EbeamEDU : public QMainWindow
{
	Q_OBJECT

public:
	EbeamEDU(QWidget *parent = Q_NULLPTR);

private:
	Ui::EbeamEDUClass ui;
};
