//Create a class with both constand non - const member
//functions.Try to call a non - const member function from
//a const member function to see what kind of compiler
//error message you get.

class B {
	int a;
	const int b;
public:
	B() :a(0), b(1) {};
	bool compareBwith() const;
	int getA();
};

bool B::compareBwith() const {
	//!int c = this->getA();//CTE: the object has type qualifiers that are not compatible
							//with the member function "B::getA"

}

int B::getA() {
	return a;
}