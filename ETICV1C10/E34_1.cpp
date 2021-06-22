#include "E32.h"

Mirror* m1() {
	static Mirror m1 = Mirror();
	return &m1;
}