//Create an enum called Hue containing red, blue, and
//yellow.Now create a class called Color containing a data
//member of type Hue and a constructor that sets the Hue
//from its argument.Add access functions to “get”and
//“set” the Hue.Make all of the functions inlines.
#include <iostream>
using namespace std;

enum Hue{red, blue, yellow};
class Color {
	Hue a;
public:
	Color(Hue b);
	void set(Hue c);
	Hue get();
};

inline Color::Color(Hue b = blue) { this->a = b; }

inline void Color::set(Hue c) { this->a = c; }

inline Hue Color::get() { return a; }

inline void printHue(Hue d) {
	switch (d) {
	case blue:
		cout << "The color is blue." << endl;
		break;
	case red:
		cout << "The color is red." << endl;
		break;
	case yellow:
		cout << "The color is yellow." << endl;
		break;
	}
}

int main() {
	Color c = Color(red);
	c.set(yellow);
	printHue(c.get());
	return 1;
}


	