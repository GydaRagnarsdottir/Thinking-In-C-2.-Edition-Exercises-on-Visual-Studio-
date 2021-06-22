//In StaticDestructors.cpp, test the default error handling
//of your implementation by turning the original definition
//of out into an extern declaration and putting the actual
//definition after the definition of a(whose Obj constructor
//sends information to out).Make sure there’s nothing else
//important running on your machine when you run the
//program or that your machine will handle faults
//robustly.
#include <fstream>
#include <iostream>
using namespace std;
extern ofstream out; // Trace file
class Obj {
	char c; // Identifier
public:
	Obj(char cc) : c(cc) {
		out << "Obj::Obj() for " << c << endl;
	}
	~Obj() {
		out << "Obj::~Obj() for " << c << endl;
	}
};
Obj a('a'); // Global (static storage) 
ofstream out("statdest.out");
// Constructor & destructor always called
//Access Violation Reading Location 0x000000000000004
void f() {
	static Obj b('b');
}
void g() {
	static Obj c('c');
}
int main() {
	cout << "inside main()" << endl;
	f(); // Calls static constructor for b
	g();// g() not called
	cout << "leaving main()" << endl;
}