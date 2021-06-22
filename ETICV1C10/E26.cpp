//Create a class containing a static double and long.Write
//a static member function that prints out the values.
#include <iostream>
using namespace std;
class Stor {
	static double constant;
	long num;
public:
	Stor():num(0){}
	Stor(long n) :num(n) {}
	static void setConstant(double a){
		constant = a;
	};
	void print() {
		cout << "Constant: " << constant << endl;
		cout << "Num: " << num << endl;
	}
};

int main() {
	Stor stor(12345);
	Stor::setConstant(2.61);
	stor.print();
}