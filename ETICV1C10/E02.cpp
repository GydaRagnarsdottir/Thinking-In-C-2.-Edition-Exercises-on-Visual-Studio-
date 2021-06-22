//Create a function that returns the next value in a
//Fibonacci sequence every time you call it.Add an
//argument that is a bool with a default value of false such
//that when you give the argument with true it “resets” the
//function to the beginning of the Fibonacci sequence.
//Exercise this function in main().
#include <iostream>
using namespace std;

int fibonacci(bool reset = false) {
	static int first = 0;
	static int second = 1;
	if (reset) {
		first = 0;
		second = 1;
		return 0;
	}
	int r = first;
	int overnext = first + second;
	first = second;
	second = overnext;
	return r;
}

int main() {
	for (int i = 0; i < 10; i++) 
		cout << fibonacci() << "; ";
	cout << endl;
	fibonacci(true);
	for (int i = 0; i < 10; i++)
		cout << fibonacci() << "; ";
}