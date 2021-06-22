#pragma once
#ifndef E24_2_H
#define E24_2_H
namespace cate{
	class Arm { /* ... */ };
	class Leg { /* ... */ };
	class Head { /* ... */ };
	class Robot {
		Arm arm[4];
		Leg leg[16];
		Head head[3];
		// ...
	} xanthan;
	int i, j, k;
}


#endif // !E24_2_H

