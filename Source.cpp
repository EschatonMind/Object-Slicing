#include"Parent.h"
#include"Child.h"
int main() {

	Child C1;
	Parent& P1 = C1;
	P1.print();


	Parent p2 = Child();
	p2.print();
	return 0;

}