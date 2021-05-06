//Correct the TRACE() macro as specified in this chapter,
//and prove that it works correctly.
#include <iostream>
using namespace std;

//#define TRACE(s) cerr << #s << endl; s//Compile-time error: identifier "i" is undefined
#define TRACE(s) cerr << #s << endl, s
inline void f(int i) {
	cout << "i: " << i << endl;
}
int main() {
for (int i = 0; i < 100; i++)
	TRACE(f(i));
}
