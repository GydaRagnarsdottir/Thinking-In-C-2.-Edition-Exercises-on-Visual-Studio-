//Create two identical functions, f1() and f2().Inline f1()
//and leave f2() as an non - inline function.Use the
//Standard C Library function clock() that is found in
//<ctime> to mark the starting point and ending points
//and compare the two functions to see which one is faster.
//You may need to make repeated calls to the functions
//inside your timing loop in order to get useful numbers.
#include <ctime>
#include <chrono>
#include <iostream>
using namespace std;

void f1() {
	double a = 1.0;
	a += 1234567.89;
	a -= 1234567.89;
	a *= 9876543.21;
	a /= 9876543.21;
}

inline void f2() {
	double a = 1.0;
	a += 1234567.89;
	a -= 1234567.89;
	a *= 9876543.21;
	a /= 9876543.21;
}

int main() {
	using clock = std::chrono::high_resolution_clock;
	using microsecond = std::chrono::duration<double, std::ratio<1, 1000000>>;
	std::chrono::time_point<clock> alpha, omega,a,b;
	alpha = clock::now();
	for (int i = 0; i < 1000; i++)
		f2();
	omega = clock::now();
	double elapsed = std::chrono::duration_cast<microsecond>(omega-alpha).count();
	cout << "F2 run time(x1000): " << elapsed << endl;

	alpha = clock::now();
	for (int i = 0; i < 1000; i++)
		f1();
	omega = clock::now();
	elapsed = std::chrono::duration_cast<microsecond> (omega-alpha).count();
	cout << "F1 run time(x1000): " << elapsed << endl;
}
//It seems that the function that runs first will always need longer time on windows 
//and VS 2019