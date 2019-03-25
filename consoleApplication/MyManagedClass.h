#pragma once

#include <string>
#include "gcroot.h"
#include "nativeClass.h"

ref class MyManagedClass;

class MyManagedClassListner : public MyNativeClassListner {
public:
	MyManagedClassListner(gcroot<MyManagedClass^>);

	virtual void callback(const std::string callbackString) override;

private:
	gcroot<MyManagedClass^> listner;
};

ref class MyManagedClass
{
public:
	MyManagedClass(MyNativeClass* nativeClass);
	void printCallback(std::string callbackString);
	MyNativeClass* nativeClass;
	MyManagedClassListner* myListner;
};


