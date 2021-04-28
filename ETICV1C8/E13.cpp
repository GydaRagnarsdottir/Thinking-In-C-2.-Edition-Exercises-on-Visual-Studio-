//Create a function that takes an argument by value as a
//const; then try to change that argument in the function
//body.
#include <iostream>
using namespace std;

void show(const int i) {
	cout << "The value of i is " << i << "." << endl;
	//i = 3;  //Compile Time Error: Expression must be a modifiable Ivalue
	cout << "The value of i is " << i << "." << endl;
}