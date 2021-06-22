#include "E32.h"
#include <iostream>
using namespace std;

extern Mirror* m4();
Mirror* m5() {
	static Mirror m5 = Mirror(m4());
	return &m5;
}

bool result = m5()->test();

int main() {
	std::cout.setf(std::ios::boolalpha);
	std::cout << result << std::endl;
	return 12345;
}