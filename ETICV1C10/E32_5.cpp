#include "E32.h"
#include "E33.h"
#include <iostream>
using namespace std;

extern Mirror m4;
int Initializer::initCount;
Mirror m5 = Mirror(&m4);
bool result = m5.test();

int main() {
	std::cout.setf(std::ios::boolalpha);
	std::cout << result << std::endl;
	return 12345;
}