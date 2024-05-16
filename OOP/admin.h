#pragma once
#include<iostream>
#include<string>
using namespace std;
using namespace System;

ref class admin
{
private:
	String^ Pass = "1234";
	String^ AdminID = "Sami";
public:
	String^ GetAdminID() {
		return AdminID;
	}
	String^ GetPass() {
		return Pass;
	}
};

