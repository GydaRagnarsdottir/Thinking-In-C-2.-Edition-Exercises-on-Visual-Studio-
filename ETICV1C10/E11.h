//Create a simple class containing an int, a constructor that
//initializes the int from its argument, a member function
//to set the int from its argument, and a print() function
//that prints the int.Put your class in a header file, and
//include the header file in two cpp files.In one cpp file
//make an instance of your class, and in the other declare
//that identifier externand test it inside main().
//Remember, you’ll have to link the two object files or else
//the linker won’t find the object.

#pragma once
#ifndef E11_H
#define E11_H
#include <iostream>
using std::cout;
using std::endl;
class RC {
	int content;
public:
	RC():content(0) {}
	RC(int a) :content(a) {}
	void set(int b) { content = b; }
	void print() { cout << "content: " << content << endl; }
};
#endif // !E11_H
