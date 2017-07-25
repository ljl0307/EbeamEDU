#include "EbeamEDU.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	EbeamEDU w;
	w.show();
	return a.exec();
}
