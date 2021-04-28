//Create a class with a volatile data member.Create both
//volatile and non - volatile member functions that modify
//the volatile data member, and see what the compiler
//says.Create both volatile and non - volatile objects of
//your class and try calling both the volatile and nonvolatile
//member functions to see what is successful and
//what kind of error messages the compiler produces.

class A {
	volatile int i;
public:
	A();
	~A();
	void modifyA(int) volatile;
	void modifyANonV(int);
};

A::A() {
	i = 0;
}

A::~A(){}

void A::modifyA(int b) volatile {
	i = b;
}

void A::modifyANonV(int b) {
	i = b;
}

int main() {
	A a1 ;
	volatile A a2 ;
	a1.modifyA(1);
	a1.modifyANonV(2);
	a2.modifyA(1);
	//a2.modifyANonV(2); //The object has type qualifiers that are not compatible with 
						//the member function "A::modifyANonV"
	return 1;
}