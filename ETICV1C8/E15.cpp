//Modify ConstReturnValues.cpp removing comments on
//the error - causing lines one at a time, to see what error
//messages your compiler generates.

class X {
	int i;
public:
	X(int ii = 0);
	void modify();
};
X::X(int ii) { i = ii; }
void X::modify() { i++; }
X f5() {
	return X();
}
const X f6() {
	return X();
}
void f7(X& x) { // Pass by non-const reference
	x.modify();
}
int main() {
	f5() = X(1); // OK -- non-const return value
	f5().modify(); // OK
	// Causes compile-time errors:
	f7(f5()); //Nothing
	//f6() = X(1);//no operator = matches these operands
	//f6().modify();//the object has type qualifiers that are not 
					//compatible with the member function "X::modify"
	//f7(f6());//qualitfiers dropped in binding reference of type "X&" to
				//initializer of type "const X"
}