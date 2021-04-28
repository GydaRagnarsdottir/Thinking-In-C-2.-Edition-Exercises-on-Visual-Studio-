//Modify ConstTemporary.cpp removing the comment on
//the error - causing line to see what error messages your
//compiler generates.
class X {};
X f() { return X(); } // Return by value
void g1(X&) {} // Pass by non-const reference
void g2(const X&) {} // Pass by const reference
int main() {
	// Error: const temporary created by f():
	// No Compiler or Runtime Error on VS 2019
	g1(f());
	// OK: g2 takes a const reference:
	g2(f());
}
