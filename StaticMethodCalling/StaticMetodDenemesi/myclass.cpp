#include "myclass.h"

int MyClass::mVariable1 = 578; //Statik veri burada initialize edilmeli.

MyClass::MyClass(QObject *parent)
	: QObject(parent)
{
	
}

MyClass::~MyClass()
{

}

int MyClass::getVariable1()
{
	return mVariable1; //statik metod statik member degiskeni return edebilir.
}

void MyClass::setVariable1(int pValue) //Statik member degiskeni statik fonksiyon modifiye edebilir.
{
	mVariable1 = pValue;
}
