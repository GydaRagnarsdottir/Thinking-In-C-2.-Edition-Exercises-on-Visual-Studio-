#include <iostream>
using namespace std;

double c[] = { 0.618, 3.1415926536, 2.71828 };


int main() {
	double* const a = c;
	cout << "c[0]: " << *c << endl;
	//a = c + 1; Compile Time Error: Expression must be a modifiable lvalue;
	*a = 1.414;
	cout << "c[0]: " << *c << endl;
}
