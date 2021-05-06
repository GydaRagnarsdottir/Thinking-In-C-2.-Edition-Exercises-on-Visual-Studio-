//Create a large quantity of the objects from the previous
//Exercise, and use the Time class to time the difference
//between non - inline constructors and inline constructors.
//(If you have a profiler, also try using that.)
#include "PreciseTimer.h"
#include <iostream>
using namespace std;

class A {
public:
	A() { cout << "Class A object created." << endl; }
};

class B {	//inline constructor
	A a;
public:
	B() {
		cout << "Class B object created!!" << endl;
	}
};

class C {	//non-inline constructor
	A a;
public:
	C();
};

C::C() {
	cout << "Class C object created!!" << endl;
}

int main() {
	PreciseTimer t;
	t.start();
	C cc[100];
	t.stop();
	t.showElapsedTime();
	t.start();
	B bb[100];
	t.stop();
	t.showElapsedTime();
	return 0;
}//Result: B go first: B:1.26685e+08 C:1.20248e+08
 //C go first: B:1.40129e+08 C:1.52368e+08