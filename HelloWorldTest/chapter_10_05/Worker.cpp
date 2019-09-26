#pragma once
#include "Worker.h"
#include "Timer.h"


void Worker::doSomething() {
	//잠시 Timer Class의 기능을 사용한다.
	Timer timer;
	timer.elapsed();
}
