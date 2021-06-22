//Create a class that holds an array of ints.Set the size of
//the array using static const int inside the class.Add a
//const int variable, and initialize it in the constructor
//initializer list; make the constructor inline.Add a static
//int member variable and initialize it to a specific value.
//Add a static member function that prints the static data
//member.Add an inline member function called print()
//to print out all the values in the array and to call the
//static member function.Exercise this class in main().
#include <iostream>
using namespace std;

class Box {
	static const int sz = 5;
	int aa[sz] = { 1,2,3,4,5 };
	const int sth;
	static int se;
public:

	//inline Box(int a) :sth(a) { se = 4;};
	inline Box(int a) :sth(a) { };
	static void show() {
		cout << "sz: " << sz << endl;
			//<< "aa:" << endl;
		cout << "se: " << se << endl;
	}
	inline void print() {
		cout << "content of array: " << endl;
		for (int i = 0; i < sz; i++)
			cout << aa[i] << "; ";
		cout << endl;
		show();
	}	
};
int Box::se = 4;
int main() {
	Box box = Box(1);
	box.print();
	return 0;
}