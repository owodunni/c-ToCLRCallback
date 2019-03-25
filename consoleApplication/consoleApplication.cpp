#include "stdafx.h"
#include "nativeClass.h"
#include "MyManagedClass.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	MyManagedClass ^ myManagedClass = gcnew MyManagedClass();
	MyManagedClassListner* myManagedClassListner = new MyManagedClassListner(myManagedClass);

	MyNativeClass myNativeClass(myManagedClassListner);

	myNativeClass.Callback();
	myManagedClassListner->callback("Hello from managed c++\n");

    return 0;
}
