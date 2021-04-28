#include <iostream>
using namespace std;

int main() {
	const char vowel[]= {'a','e','i','o','u'};
	cout << "vowels: ";
	for (int i = 0; i < 5; i++) {
		cout << vowel[i] << " ";
	}
	cout << endl;
	//vowel[4] = 'w';//Expression must be a modifiable lvalue

}