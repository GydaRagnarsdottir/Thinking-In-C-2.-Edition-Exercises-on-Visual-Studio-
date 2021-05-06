//Write a program that uses the FLOOR() macro shown at
//the beginning of the chapter.Show the conditions under
//which it does not work properly.
#include <iostream>
using namespace std;
#define FLOOR(x,b) x>=b?0:1

int main() {
	int a = 3, b = 2;
	int& ar = a;
	if (FLOOR(ar, b))
		cout << "yes." << endl;
	else
		cout << "no." << endl;
	return 0;
}