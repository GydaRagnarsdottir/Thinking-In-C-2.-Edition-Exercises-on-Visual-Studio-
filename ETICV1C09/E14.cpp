//Create a class A with an inline default constructor that
//announces itself.Now make a new class Band put an
//object of A as a member of B, and give B an inline
//constructor.Create an array of B objectsand see what
//happens.
#include <iostream>
using namespace std;

class A {
public:
	A() { cout << "Class A object created." << endl; }
};

class B {
	A a;
public:
	B() { 
		cout << "Class B object created!!" << endl;
	}
};

int main(){
	B bb[5];
	return 0;
}