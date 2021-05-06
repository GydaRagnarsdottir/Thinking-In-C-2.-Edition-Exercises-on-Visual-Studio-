//Create a class with two inline member functions, such
//that the first function that’s defined in the class calls the
//second function, without the need for a forward
//declaration.Write a main that creates an object of the
//classand calls the first function.
#include <iostream>
using namespace std;

class A {
public:
	void firstFunction() {
		cout << "The First Function called." << endl;
		secondFunction();
	}
	void secondFunction() {
		cout << "The Second Function called." << endl;
	}
};

int main() {
	A a;
	a.firstFunction();
}