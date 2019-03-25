#pragma once

#include <string>
#include "gcroot.h"

ref class MyManagedClass
{
public:
	MyManagedClass();
	void printCallback(std::string callbackString);
};

#include "nativeClass.h"
class MyManagedClassListner : public MyNativeClassListner {
public:
	MyManagedClassListner(gcroot<MyManagedClass^>);

	virtual void callback(const std::string callbackString) override;

private:
	gcroot<MyManagedClass^> listner;
};
