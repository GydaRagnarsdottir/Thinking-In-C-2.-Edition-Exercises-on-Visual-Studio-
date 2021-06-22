#include "E32.h"
extern Mirror* m2();

Mirror* m3() {
	static Mirror m3 = Mirror(m2());
	return &m3;
}