#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>

class MyClass : public QObject
{
	Q_OBJECT


public:
	MyClass(QObject *parent);
	~MyClass();

	static int getVariable1();

	static void setVariable1(int pValue);

private:
	int static mVariable1;
};





#endif // MYCLASS_H
