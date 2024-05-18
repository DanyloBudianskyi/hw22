#include "Time.h"

int main()
{
	//Time_ start(8,0,0,1);
	//Time_ currentTime = start;
	//float shortBreak = 10;
	//float longBreak = 20;
	//float lessonDuration = 45;
	//int totalLessons = 7;
	//int longBreakAfter = 3;
	//Time_* startLessons = new Time_[totalLessons];
	//Time_* finishLessons = new Time_[totalLessons];
	//for (int i = 0; i < totalLessons; i++) {
	//	startLessons[i] = currentTime;
	//	finishLessons[i] = startLessons[i] + lessonDuration;
	//	currentTime = finishLessons[i];
	//	if (i == longBreakAfter) {
	//		currentTime += longBreak;
	//	}
	//	else {
	//		currentTime += shortBreak;
	//	}
	//}
	//for (int i = 0; i < totalLessons; i++) {
	//	cout << "Lesson " << i + 1 << " : "; startLessons[i].showTime(); cout << " - "; finishLessons[i].showTime(); cout << endl;
	//}
	//delete[] startLessons;
	//delete[] finishLessons;

	//------------------------------------------------------------------------
	Time_ a;
	cin >> a;
	for (int i = 0; i < 60; i++) {
		a++;
	}
	cout << a;
}