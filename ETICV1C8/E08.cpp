#include <iostream>
using namespace std;
long d = 1111111111;
const long* a = &d;
long c[] = { 1,22,3333 };
long const* b = c;

int main() {
	cout << "Size of long: " << sizeof(long) << endl;
	for (int i = 0; i < 3; i++) {
		cout << *b++ << endl;	
	}
	b = c;
	//*(b + 1) = 1; //Compile Time Error: Expression mus be a modifiable lvalue
}