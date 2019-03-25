#pragma once

#include <string>

class MyNativeClassListner {
public:
	virtual void callback(const std::string) = 0;
};

class MyNativeClass {
public:
	MyNativeClass();

	void Callback();

	MyNativeClassListner * listner = nullptr;
};