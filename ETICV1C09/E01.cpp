//Write a program that uses the F() macro shown at the
//beginning of the chapterand demonstrates that it does
//not expand properly, as described in the text.Repair the
//macroand show that it works correctly.
#include <iostream>
using namespace std;
//#define F (x) (x+1)  <== Visual Studio report identifier is undefined
#define F(x) (x+1)

int main() {
	cout << "F(3) = " << F(3) << endl;
}