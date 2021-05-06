//Modify the FIELD() macro so that it also contains an
//index number.Create a class whose members are
//composed of calls to the FIELD() macro.Add a member
//function that allows you to look up a field
#include <iostream>
using namespace std;
#define FIELD(a) char* a##_string; int a##_size; int a##_index;
#define INIT(a) a##_string = ""; a##_size = 0; a##_index = 0;
#define CHECKFIELD(a) cout << a <<"_string: " << a##_string << '\t' << #a <<"_size: " << a##_size <<'\t' << a## <<"_index: " << a##_index;

class A {
	FIELD(one);
	FIELD(two);
	
public:
	A() {
		INIT(one);
		INIT(two);
	};
	void lookUp(char*);
};

void A::lookUp(char* str) {
	CHECKFIELD(str);
}

int main() {
	A a = A();
	//a.lookUp(1);
	//a.lookUp(2);
}