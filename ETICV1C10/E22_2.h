#pragma once
#ifndef E22_2_H
#define E22_2_H
using std::cout;
using std::endl;
namespace a {
	class AClass {
		int num;
	public:
		inline AClass() :num(0) {}
		inline AClass(int a) : num(a) {}
		inline void display() {
			cout << "The number is " << num << ". " << endl;
		}
	};
}
#endif
