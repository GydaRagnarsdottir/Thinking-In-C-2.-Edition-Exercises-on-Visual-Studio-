//Create a class called MyString which contains a string
//and has a constructor that initializes the string, and a
//print() function.Modify StringStack.cpp so that the
//container holds MyString objects, and main() so it prints
//them.
#include <string>
#include <iostream>
using namespace std;

class MyString {
	string content;
public:
	MyString(string&);
	void print() const;
	~MyString();
};

MyString::MyString(string& a) {
	content = a;
}

void MyString::print() const {
	cout << content << endl;
}

MyString::~MyString() {};

class StringStack {
	static const int size = 100;
	const MyString* stack[size];
	int index;
public:
	StringStack();
	void push(const MyString* s);
	const MyString* pop();
};
StringStack::StringStack() : index(0) {
	memset(stack, 0, size * sizeof(MyString*));
}
void StringStack::push(const MyString* s) {
	if (index < size)
		stack[index++] = s;
}
const MyString* StringStack::pop() {
	if (index > 0) {
		const MyString* rv = stack[--index];
		stack[index] = 0;
		return rv;
	}
	return 0;
}
string iceCream[] = {
"pralines & cream",
"fudge ripple",
"jamocha almond fudge",
"wild mountain blackberry",
"raspberry sorbet",
"lemon swirl",
"rocky road",
"deep chocolate fudge"
};
const int iCsz = sizeof iceCream / sizeof * iceCream;

int main() {
	StringStack ss;
	for (int i = 0; i < iCsz; i++) {
		MyString* ms = new MyString(iceCream[i]);
		ss.push(ms);
	}
		//ss.push(&iceCream[i]);


	const MyString* cp;
	while ((cp = ss.pop()) != 0) {
		cp->print();
		cp->~MyString();
	}
		
}