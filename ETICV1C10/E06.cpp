//Make a global object of Monitor2 and see what happens.
//C2512 "Monitor2": no appropriate default constructor available
#include <iostream>
using namespace std;

class Monitor1 {
	static int count;
public:
	Monitor1() { };
	void incident() { count++; };
	void decrement() { count--; };
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
Monitor2 m2;
void function() {
	
	Monitor1 m1 = Monitor1();
	static Monitor2 m2 = Monitor2(&m1);
	m2.~Monitor2();
}

int main() {
	function();
	return 0;
}