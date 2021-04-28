//In ConstMember.cpp, remove the const specifier on the
//member function definition, but leave it on the
//declaration, to see what kind of compiler error message
//you get.
class X {
	int i;
public:
	X(int ii);
	int f() const;
};
X::X(int ii) : i(ii) {}
int X::f() const  { return i; } //if remove the "const"
								//declaration is incompatible with "int X::f() const"
int main() {
	X x1(10);
	const X x2(20);
	x1.f();
	x2.f();
}
