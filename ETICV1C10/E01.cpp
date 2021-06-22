//Create a function with a static variable that is a pointer
//(with a default argument of zero).When the caller
//provides a value for this argument it is used to point at
//the beginning of an array of int.If you call the function
//with a zero argument(using the default argument), the
//function returns the next value in the array, until it sees a
//“ - 1” value in the array(to act as an end - of - array
//indicator).Exercise this function in main()
#include <iostream>
using namespace std;

int indicate(int* a = 0) {
	static int* indi;
	if (a) {
		indi = a;
		return *indi;
	}
	if (*indi == -1)
		return 0;
	return *indi++;
}

int main() {
	int c[] = { 1,2,3,4,5,-1};
	int x;
	indicate(c);
	while ((x = indicate()) != 0)
		cout << x << endl;
	return 0;
}