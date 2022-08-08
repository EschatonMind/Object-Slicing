#pragma once
#include <iostream>
using namespace std;
class Parent
{

private:
	int one;

public:
	Parent();

	Parent(const Parent& other);

	virtual void print();

	virtual ~Parent();
};