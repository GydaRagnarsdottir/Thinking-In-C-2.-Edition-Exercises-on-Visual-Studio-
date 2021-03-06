//Modify MacroSideEffects.cpp so that BAND() works
//properly.
#include <fstream>
#include "require.h"
using namespace std;
#define BAND(x) (((x)>5 && (x)<10) ? (x) : 0)
int main() {
	ofstream out("macro.out");
	assure(out, "macro.out");
	for (int i = 4; i < 11; i++) {
		int a = i;
		out << "a = " << a << endl << '\t';
		++a;
		out << "BAND(++a)=" << BAND(a) << endl;
		out << "\t a = " << a << endl;
	}
}