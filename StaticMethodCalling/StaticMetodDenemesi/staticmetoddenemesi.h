#ifndef STATICMETODDENEMESI_H
#define STATICMETODDENEMESI_H

#include <QtWidgets/QMainWindow>
#include "ui_staticmetoddenemesi.h"

class StaticMetodDenemesi : public QMainWindow
{
	Q_OBJECT

public:
	StaticMetodDenemesi(QWidget *parent = 0);
	~StaticMetodDenemesi();

private:
	Ui::StaticMetodDenemesiClass ui;
};

#endif // STATICMETODDENEMESI_H
