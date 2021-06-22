#include "E11.h"
#include <iostream>
using namespace std;



int main() {
	//extern RC rc(1);
	//E2442: an initializer is not allowed on a local declaration of an extern variable
	//C2205: 'rc':cannot initialize extern variables with block scope.
	extern RC rc;
	//LNK2001: unresolved external symbol "class RC rc"
	//LMK1120: 1 unsovled externals
	//"static" keyword applies a file scope on a variable.
	rc.print();
	rc.set(2);
	rc.print();
}