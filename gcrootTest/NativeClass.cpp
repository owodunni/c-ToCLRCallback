#include "nativeClass.h"

MyNativeClass::MyNativeClass()
{
}

void MyNativeClass::Callback()
{
	this->listner->callback("Hello form c++\n");
}
