//Create a class called Monitor that keeps track of the
//number of times that its incident() member function has
//been called.Add a print() member function that displays
//the number of incidents.Now create a global function
//(not a member function) containing a static Monitor
//object.Each time you call the function it should call
//incident(), then print() to display the incident count.
//Exercise the function in main().
#include <iostream>
using namespace std;

class Monitor {
	static int count;
public:
	Monitor(){count = 0; };
	void incident() { count++; };
	void print() {
		cout << "Count: " << count << endl;
	};
};

//static Monitor mon = Monitor::Monitor();
//Monitor* m = &mon;
int Monitor::count = 0;



void overwatch() {
	static Monitor mon;
	mon.incident();
	mon.print();
}

int main() {
	overwatch();
	overwatch();
	overwatch();
	return 0;
}