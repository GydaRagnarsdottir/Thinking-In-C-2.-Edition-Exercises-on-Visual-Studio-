#include <ctime>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	time_t t;
	time(&t);
	struct tm* ts = localtime(&t);
	const string t1 = asctime(ts);
	cout << "Current Time: " << t1 << endl;
	int j = 0;
	for (int i = 0; i < 100000001; i++) {
		j = j + i;
		j = j - i;
	}
	time(&t);
	ts = localtime(&t);
	const string t2 = asctime(ts);
	cout << "Current Time:" << t2 << endl;
 	//Compile Time Error: no operator "=" matches these operands
}