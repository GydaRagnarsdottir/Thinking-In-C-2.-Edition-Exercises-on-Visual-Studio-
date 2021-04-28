// ETICV1C8.cpp : Defines the entry point for the application.
//
#include <iostream>

using namespace std;

int main()
{
	//const double a = 1.0;
	//const double b = 2.5;
	//const double c = 3.5;
	//int e = (int)(a + b + c);
	//int d[e];//Error: expression must have a constant value ;
	
	const int a = 1;
	const int b = 2;
	const int c = 3;
	const int e = a + b + c;
	int d[e];
	memset(&d, 0, sizeof(int)*e);
	for (int i = 0; i < e; ++i) {
		cout << "The " << i << ". element is " << d[i] << endl;
	}
}
