/*
Repair the problem in OverridingAmbiguity.cpp, first
with scope resolution, then instead with a using
declaration that forces the compiler to choose one of the
identical function names.
*/
#include "NamespaceMath.h"
#include "NamespaceOverriding2.h"
void s() {
	using namespace Math;
	using namespace Calculation;
	// Everything's ok until:
	Math::divide(1, 2); // Ambiguity
	//E0308: more than one instance of overloaded function "divide" matches the argument list
}
int main() {}