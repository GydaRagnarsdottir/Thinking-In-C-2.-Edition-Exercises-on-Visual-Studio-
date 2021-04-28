//Create a character array literal with a pointer that points
//to the beginning of the array.Now use the pointer to
//modify elements in the array.Does your compiler report
//this as an error ? Should it ? If it doesn’t, why do you think
//that is ?
#include <iostream>
using namespace std;

int main() {
	char a[] = { "GydaRagnarsdottir" };
	//char* ap = &a;//a value of type "char(*)[18] cannot be 
					//used to initialize an entity of type "char*"
	char* ap = &a[0];
	cout << *ap << *(ap + 1) << *(ap + 2) << *(ap + 3) << endl;
	*(ap + 1) = 'Y';
	cout << *ap << *(ap + 1) << *(ap + 2) << *(ap + 3) << endl;
}//Since a is not a constant array, it's supposed to be modifiable.