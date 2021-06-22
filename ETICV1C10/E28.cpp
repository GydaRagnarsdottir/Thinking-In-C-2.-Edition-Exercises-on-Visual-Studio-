//Create a class containing both a const and a non - const
//static array of int.Write static methods to print out the
//arrays.Exercise your class in main().
#include <iostream>
using namespace std;

class Arrays {
	//const static int a[] = { 1,2,36,64,729 };
	//a member of type "const int[]" cannot have an in-class initializer
	const static int a[];
	static int b[];
public:
	Arrays() {}
	static void printA();
	static void printB();
};

//const static int Arrays::a[] = { 1,2,36,64,729 };
//E0080: a storage class may not be specified here
const int Arrays::a[] = { 1,2,36,64,729 };
int Arrays::b[] = { 3,5,8,13,21,34 };

void Arrays::printA() {
	for (int i = 0; i < (sizeof(Arrays::a) / sizeof(int)); i++)
		cout << a[i] << "\t";
	cout << endl;
}

void Arrays::printB(){
	for (int i = 0; i < (sizeof(Arrays::b) / sizeof(int)); i++) 
		cout << b[i] << "\t";
	cout << endl;
}

int main() {
	Arrays::printA();
	Arrays::printB();
	return 0;
}
