//Create a function that takes a float by value.Inside the
//function, bind a const float& to the argument, and only
//use the reference from then on to ensure that the
//argument is not changed.
#include <iostream>
using namespace std;


void show(float a, int b) {
	const float* f = &a;
	cout << "The content of a: " << *f << endl;
	float c = (*f) * (float)b;
	cout << "The result: " << c << endl;
	cout << "The reference of a:" << f << endl;
	cout << "The content of a: " << *f << endl;
}

int main() {
	show(1.414, 15);
	return 0;
}