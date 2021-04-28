#include <iostream>
using namespace std;

class A {
	int i;
public:
	A();
	void show();
	void modify(int i);
};
A::A() {
	i = 0;
}

void A::show() {
	cout << "i value of this instance:" << i << endl;
}

void A::modify(int i) {
	this->i = i;
}

int main() {
	const A a1 = A();
	const A a2 = A();
	//a.show();//Compile Time Error:the object has type qualifiers that are not compatible 
	//with the member function "A::show"
	const A* ap = &a1;
	ap = &a2;
	cout << "a2.i = " << *(int*)ap << endl;
}