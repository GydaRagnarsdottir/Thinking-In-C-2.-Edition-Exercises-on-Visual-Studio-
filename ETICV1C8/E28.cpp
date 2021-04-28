//Create a class called bird that can fly() and a class rock
//that can’t.Create a rock object, take its address, and
//assign that to a void* .Now take the void*, assign it to a
//bird* (you’ll have to use a cast), and call fly() through
//that pointer.Is it clear why C’s permission to openly
//assign via a void* (without a cast) is a “hole” in the
//language, which couldn’t be propagated into C++ ?
#include <iostream>
using namespace std;
class Bird {
public:
	Bird() {};
	~Bird() {};
	void fly() { cout << "Fly birdy fly!" << endl; };
};

class Rock {
public:
	Rock() {};
	~Rock() {};
	void roll() { cout << "Rock&Roll!" << endl; };
};

int main() {
	Rock r = Rock();
	void* v = &r;
	//v->roll();   Expression must have pointer-to-class type
	Bird* b = (Bird*)v;
	b->fly();
	//b->roll(); class "Bird" has no member "roll"

	return 1;
}