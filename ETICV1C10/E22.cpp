#include <iostream>
#include "E22_1.h"
#include "E22_2.h"
using namespace std;
using namespace a;
using namespace b;

void aFunction() {
	// namespace a;
	//using namespace b;
	//AClass ac; //with local or global using directive
	a::AClass ac1 = a::AClass();
	b::AClass ac2 = b::AClass(100);
	ac1.display();
	ac2.display();
	//"AClass" is ambiguous
}

int main() {
	aFunction();
}