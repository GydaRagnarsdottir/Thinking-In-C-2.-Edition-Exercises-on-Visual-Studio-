//Modify the Monitor class from Exercise 4 so that you can
//decrement() the incident count.Make a class Monitor2
//that takes as a constructor argument a pointer to a
//Monitor1, and which stores that pointer and calls
//incident() and print().In the destructor for Monitor2,
//call decrement() and print().Now make a static object
//of Monitor2 inside a function.Inside main(), experiment
//with calling the function and not calling the function to
//see what happens with the destructor of Monitor2.
#include <iostream>
using namespace std;

class Monitor1 {
	static int count;
public:
	Monitor1() { };
	void incident() { count++; }
	void decrement() { count--; }
	void print() {
		cout << "Count: " << count << endl;
	};
};

class Monitor2 {
	Monitor1* mon1;
public:
	Monitor2(Monitor1* m1) {
		mon1 = m1;
		mon1->incident();
		mon1->print();
	}
	~Monitor2() {
		mon1->decrement();
		mon1->print();
	}
};

int Monitor1::count = 0;

void function() {
	Monitor1 m1 = Monitor1();
	static Monitor2 m2 = Monitor2(&m1);
	//m2.~Monitor2();
}

int main() {
	function();
	return 0;
}
//The destructor is called twice,why?
//Destructors for static objects(that is, all objects with static storage,
//not just local static objects as in the example above) are called when
//main() exits or when the Standard C library function exit()is
//explicitly called.