#include "stdafx.h"
#include "MyManagedClass.h"

using namespace System;


MyManagedClass::MyManagedClass()
{

}

void MyManagedClass::printCallback(std::string callbackString)
{
	System::Console::Write(gcnew String(callbackString.c_str()));
}

MyManagedClassListner::MyManagedClassListner(gcroot<MyManagedClass^> listner)
{
	this->listner = listner;
}

void MyManagedClassListner::callback(const std::string callbackString)
{
	this->listner->printCallback(callbackString);
}
