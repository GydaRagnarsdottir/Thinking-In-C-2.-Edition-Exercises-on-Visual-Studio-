#include "E17.h"

int main() {
	extern void set_1(int);
	extern void set_2(int);
	extern void show_1();
	extern void show_2();

	set_1(10);
	set_2(100);
	show_1();
	show_2();//with "static" before i: 100; without:100
			 //with name for namespace:repeated defined variable  without:100
	return 3;
}