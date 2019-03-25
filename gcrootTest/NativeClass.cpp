#include "nativeClass.h"

MyNativeClass::MyNativeClass(MyNativeClassListner * listner)
{
}

void MyNativeClass::Callback()
{
	listner->callback("Hello form c++");


}
