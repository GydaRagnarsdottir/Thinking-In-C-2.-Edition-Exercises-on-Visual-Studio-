//Create a class with a destructor that prints a messageand
//then calls exit().Create a global object of this class and
//see what happens.
//Estimation: produce an error about that object has already
//been deleted.(This didn't happen).
#include <iostream>
using namespace std;

class aClass {
public:
	aClass() { cout << "aClass created." << endl; };
	~aClass() {
		cout << "aClass destructor called." << endl;
		exit(0);
	}
};

aClass a;

int main() {
	cout << "Main here." << endl;
	return 0;
}