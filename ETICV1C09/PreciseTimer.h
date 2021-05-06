#pragma once
#ifndef PRECISETIMER_H
#define PRECISETIMER_H
#include <iostream>
#include <chrono>

using nanoSecond = std::chrono::duration<double, std::ratio<1, 1000000000>>;


class PreciseTimer {
	std::chrono::high_resolution_clock clock;
	std::chrono::time_point<std::chrono::high_resolution_clock> alpha, omega;
public:
	void start() { alpha = clock.now(); }
	void stop() { omega = clock.now(); }
	void showElapsedTime() {
		std::cout << "Nanosecond count: "
			<< std::chrono::duration_cast<nanoSecond>(omega - alpha).count() << '\n';
	}
};

#endif // !PRECISETIMER_H

