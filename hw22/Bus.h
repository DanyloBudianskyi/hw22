#pragma once
#include "Time.h"

class Bus
{
	Time_ startTime;
	Time_ finishTime;
	float roadTime;
	float restTime;
	Time_* scheduleArrStart;
	Time_* scheduleArrFinish;
	int  arrSize;
	void calculateScheduleCapacity();
	void createSchedule();
	
public:
	Bus(Time_ startTime, Time_ finishTime, float roadTime, float restTime);
	~Bus();

	void setStartTime(Time_ startTime);
	void setFinishTime(Time_ startTime);
	void setRoadTime(float startTime);
	void setRestTime(float startTime);

	Time_ getStartTime()const;
	Time_ getFinishTime()const;
	float getRoadTime()const;
	float getRestTime()const;

	void showSchedule()const;
};

