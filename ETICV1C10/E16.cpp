//Create a header file containing a namespace.Inside the
//namespace create several function declarations.Now
//create a second header file that includes the first one and
//continues the namespace, adding several more function
//declarations.Now create a cpp file that includes the
//second header file.Alias your namespace to another
//(shorter) name.Inside a function definition, call one of
//your functions using scope resolution.Inside a separate
//function definition, write a using directive to introduce
//your namespace into that function scope, and show that
//you don’t need scope resolution to call the functions from
//your namespace.
#include "E16-2.h"
#include <iostream>

namespace op = Operations;

void showcase1(int a, int b) {
	std::cout << "The result of addition of " << a << " and " << b << " is "
		<< op::addition(a, b) << std::endl;
}

void showcase2(int a, int b) {
	using op::subtraction;
	std::cout << "The result of subtraction of " << a << " and " << b << " is "
		<< subtraction(a, b) << std::endl;
}

void showcase3(int a, int b) {
	using namespace op;
	std::cout << "The result of multiplication of " << a << " and " << b << " is "
		<< multiplication(a, b) << std::endl; 
	
}

int main() {
	showcase1(2, 1);
	showcase2(2, 1);
	showcase3(2, 1);
	return 0;
}