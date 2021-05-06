#include <cstring>
#include <iostream>
using namespace std;

class Str {
	enum{sz=100};
	char a[sz];
public:
	inline Str(char c =' ') {
		memset(a, c, sz);
	};
	inline void print() {
		cout << "The content of this Str:" << endl;
		for (size_t i = 0; i < sz; i++) 
			cout << a[i] <<","<<endl;
		cout << "Over." << endl;
	};
};



int main() {
	Str a;
	a.print();
}
