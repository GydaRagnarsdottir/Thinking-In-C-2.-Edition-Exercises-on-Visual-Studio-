//Create a class containing a const member that you
//initialize in the constructor initializer list and an
//untagged enumeration that you use to determine an
//array size.

class G {
	enum {size = 5};
	int a[size];
public:
	//! G() :a({0}) {};// Can't do this after c++ 03

};
