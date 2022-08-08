#include "Parent.h"
Parent::Parent() : one(0) {

}

Parent::Parent(const Parent& other) {
	one = other.one;
	cout << " copy parent " << endl;
}

void Parent::print() {
	cout << " parent " << endl;
}

Parent::~Parent() {

}