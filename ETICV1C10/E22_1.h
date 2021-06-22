#pragma once
#ifndef E22_1_H
#define E22_1_H
using std::cout;
using std::endl;
namespace b{
	class AClass {
		int num;
	public:
		inline AClass():num(0){}
		inline AClass(int a):num(a){}
		inline void display() {
			cout << "The number is " << num << ". " << endl;
		}
	};
}
#endif
