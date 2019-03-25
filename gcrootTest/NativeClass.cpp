#include "nativeClass.h"

MyNativeClass::MyNativeClass(MyNativeClassListner * listner)
{
	this->listner = listner;
}

void MyNativeClass::Callback()
{
	this->listner->callback("Hello form c++\n");
}
