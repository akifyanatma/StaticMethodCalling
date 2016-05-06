#include "staticmetoddenemesi.h"
#include "myclass.h"

StaticMetodDenemesi::StaticMetodDenemesi(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	int x = MyClass::getVariable1();
	MyClass::setVariable1(555);
}

StaticMetodDenemesi::~StaticMetodDenemesi()
{

}
