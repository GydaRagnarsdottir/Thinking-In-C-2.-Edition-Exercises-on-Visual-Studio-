//Create a struct that contains an int and a default
//constructor that initializes the int to zero.Make this
//struct local to a function.Inside that function, create an
//array of objects of your struct and demonstrate that each
//int in the array has automatically been initialized to zero.
#include <iostream>
using namespace std;

void aFunction() {
	struct Num {
	private:
		int n;
	public:
		Num() :n(0) {}
		Num(int a):n(a) {}
		void demonstrate() {
			cout << n << "\t";
		}
	};
	Num a[5];
	for (int i = 0; i < 5; i++) {
		a[i].demonstrate();
	}
}

int main() {
	aFunction();
	return 1234567;
}