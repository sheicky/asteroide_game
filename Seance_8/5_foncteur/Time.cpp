#include "Time.hpp"

Time::Time(int hours, int minutes) : hours_(hours), minutes_(minutes) {}

int Time::getHours() const {
    return hours_;
}

int Time::getMinutes() const {
    return minutes_;
}

void Time::advanceOneHour() {
    if (hours_ == 23) {
        hours_ = 0;
    } else {
        hours_++;
    }
}