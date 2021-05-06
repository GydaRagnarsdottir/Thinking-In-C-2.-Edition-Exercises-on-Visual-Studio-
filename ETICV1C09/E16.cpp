//Write a program that takes a string as the command - line
//argument.Write a for loop that removes one character
//from the string with each pass, and use the DEBUG()
//macro from this chapter to print the string each time.
#include <iostream>
using namespace std;
#define DEBUG(x) cout << #x " = " << x << endl

int main() {
	string s;
	cout << "Enter a command:" << endl;
	cin >> s;
	for (int i = 0; i < s.size(); ++i)
		DEBUG(s[i]);
	return 0;
}