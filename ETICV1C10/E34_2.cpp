#include "E32.h"

extern Mirror* m1();

Mirror* m2() {
	static Mirror m2 = Mirror(m1());
	return &m2;
}