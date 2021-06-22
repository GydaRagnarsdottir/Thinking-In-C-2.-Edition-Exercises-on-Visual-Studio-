//Create a class containing an int, a constructor that
//initializes the int from its argument, and a print()
//function to display the int.Now create a second class
//that contains a static object of the first one.Add a static
//member function that calls the static object’s print()
//function.Exercise your class in main().
#include <iostream>
using namespace std;

class A {
	int num;
public:
	A(int a) :num(a) {}
	void print() {
		cout << "Num: " << num << endl;
	}
};

class B {
	static A a;
public:
	B() {
	}
	//B(A& aa):a(aa){}
	//E0292: "a" is not a nonstatic data member or base classe of class "B"
	B(A aa) {
		a = aa;
	}
	void print() {
		a.print();
	}
};

A B::a(12345);
int main() {
	//A B::a(12345);
	//E0551 member "B::a" cannot be defined in the current scope
	//B b(a);
	//LNK2001 unresolved external symbol "private static class A B::a"
	B b;
	b.print();
}