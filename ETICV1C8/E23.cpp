//Create a class with both constand non - const member
//functions.Create const and non - const objects of this
//class, and try calling the different types of member
//	functions for the different types of objects.
#include <string>
#include <iostream>
using namespace std;

class A {
	const int b;
	string c;
public:
	A() :b(0), c("") {};
	A(int b1,string c1):b(b1), c(c1) {};
	void print() {
		cout << "int: " << b << endl;
		cout << "string: " << c << endl;
	}
	void printC() const {
		cout << "int: " << b << endl;
		cout << "string: " << c << endl;
	}
	int peek() {return b;}
	int peek() const { return b;}
};

int main() {
	A a1 = A();
	const A a2 = A(1, "Valor");
	//a2.print();//CTE: the object has type qualifiers that are not compatible with the
				//member function "A::print"
	a1.printC();//ok
	a1.print(); //ok
	a2.printC(); //ok
	cout << "int of a1: " << a1.peek() << endl;
	cout << "int of a2: " << a2.peek() << endl;//overloaded
}