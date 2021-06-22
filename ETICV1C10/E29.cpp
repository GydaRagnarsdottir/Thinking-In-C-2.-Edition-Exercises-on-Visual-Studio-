//Create a class containing a string, with a constructor that
//initializes the string from its argument, and a print()
//function to display the string.Create another class that
//contains both const and non - const static arrays of objects
//of the first class, and static methods to print out these
//arrays.Exercise this second class in main().
#include <iostream>
#include <string>
using namespace std;

class StrContainer {
	string content;
public:
	StrContainer(string s):content(s){}
	//void printContent() {
	//E1086 the object has type qualifiers that are not compatible with the member function
	//"StrContainer::printContent"
	void printContent() const{
		cout << content << endl;
	}
};

class StrStorage {
	const static StrContainer a[];
	static StrContainer b[];
public:
	StrStorage() {};
	~StrStorage() {};
	const static void printA();
	static void printB();
};

const StrContainer StrStorage::a[] = {
StrContainer("Behold, Gyda Ragnarsdottir,"),
StrContainer("humble maid of the highest good,"),
StrContainer("pursuer of infinity."),
};
StrContainer StrStorage::b[] = {
StrContainer("To bring light into the darkness,"),
StrContainer("and forge order out of chaos."),
};
const void StrStorage::printA() {
	for (int i = 0; i < (sizeof(a) / sizeof(*a)); i++)
		a[i].printContent();
}

void StrStorage::printB() {
	for (int i = 0; i < (sizeof(b) / sizeof(*b)); i++)
		b[i].printContent();
}

int main() {
	StrStorage s;
	StrStorage::printA();
	StrStorage::printB();
}