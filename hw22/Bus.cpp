#include "Bus.h"

void Bus::calculateScheduleCapacity()
{
    arrSize = 0;
    Time_ currentTime = startTime;
    for (currentTime; currentTime < finishTime; currentTime += roadTime + restTime) {
        this->arrSize++;
    }
    if (currentTime > finishTime) arrSize--;
}

void Bus::createSchedule()
{
    Time_ currentTime = startTime;
    for (int i = 0; i < arrSize; i++) {
        scheduleArrStart[i] = currentTime;
        scheduleArrFinish[i] = currentTime + roadTime;
        currentTime += roadTime + restTime; 
    }
}


Bus::Bus(Time_ startTime, Time_ finishTime, float roadTime, float restTime)
{
    this->startTime = startTime;
    this->finishTime = finishTime;
    this->roadTime = roadTime;
    this->restTime = restTime;
    calculateScheduleCapacity();
    scheduleArrStart = new Time_[arrSize];
    scheduleArrFinish = new Time_[arrSize];
    createSchedule();
}

Bus::~Bus()
{
    delete[] scheduleArrStart;
    delete[] scheduleArrFinish;
}

void Bus::setStartTime(Time_ startTime)
{
    this->startTime = startTime;
}

void Bus::setFinishTime(Time_ finishTime)
{
    this->finishTime = finishTime;
}

void Bus::setRoadTime(float roadTime)
{
    this->roadTime = roadTime;
}

void Bus::setRestTime(float restTime)
{
    this->restTime = restTime;
}

Time_ Bus::getStartTime() const
{
    return startTime;
}

Time_ Bus::getFinishTime() const
{
    return finishTime;
}

float Bus::getRoadTime() const
{
    return roadTime;
}

float Bus::getRestTime() const
{
    return restTime;
}


void Bus::showSchedule() const
{   
    for (int i = 0; i < arrSize; i++) {
        cout << scheduleArrStart[i] << " - " << scheduleArrFinish[i] << endl;
    }
}
