#include "E32.h"
extern Mirror* m3();
Mirror* m4() {
	static Mirror m4 = Mirror(m3());
	return &m4;
}