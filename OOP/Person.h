#pragma once
#include<iostream>
#include<string>
using namespace System;
using namespace System::IO;
using namespace System::Text;
using namespace std;
ref class Person {
protected:
	String^ Name;
public:
	inline String^ GetName() {
		return Name;
	}

};

