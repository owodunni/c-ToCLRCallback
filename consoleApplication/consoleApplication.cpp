#include "stdafx.h"
#include "nativeClass.h"
#include "MyManagedClass.h"

using namespace System;

int main(array<System::String ^> ^args)
{

	MyManagedClass ^ myManagedClass = gcnew MyManagedClass(new MyNativeClass());
	myManagedClass->nativeClass->Callback();
    return 0;
}
