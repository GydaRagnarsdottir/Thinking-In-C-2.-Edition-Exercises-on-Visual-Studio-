//Extract the namespace declarations in
//BobsSuperDuperLibrary.cpp and
//UnnamedNamespaces.cpp and put them in separate
//header files, giving the unnamed namespace a name in
//the process.In a third header file create a new namespace
//that combines the elements of the other two namespaces
//with using declarations.In main(), introduce your new
//namespace with a using directiveand access all the
//elements of your namespace.
#include "E24_3.h"
#include <iostream>
using namespace std;
using namespace daisy;
int main() {
	//solution 1:
	//daisy::c::Arm a1;
	//daisy::b::Poppit p1;
	//solution 2:
	Arm a1;
	Poppit p1;
	cout << "Namespace Daisy introduced successfully." << endl;
}