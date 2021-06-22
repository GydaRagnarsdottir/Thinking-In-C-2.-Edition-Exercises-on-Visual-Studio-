#pragma once
#ifndef E33_H
#define E33_H
#include <iostream>
#include "E32.h"
extern Mirror m1, m2, m3, m4, m5;
class Initializer {
	static int initCount;
public:
	Initializer() {
		std::cout << "Initializer()" << std::endl;
		if (initCount++ == 0) {
			std::cout << "performing initialization"
				<< std::endl;
			m1 = Mirror();
			m2 = Mirror();
			m3 = Mirror();
			m4 = Mirror();
			m5 = Mirror();
		}
	}
	~Initializer() {
		std::cout << "~Initializer()" << std::endl;
		if (--initCount == 0) {
			std::cout << "performing cleanup"
				<< std::endl;
		}
	}
};
static Initializer init;
#endif // !E33_H

