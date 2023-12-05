#ifndef SWITCHSUMMERTIME_HPP
#define SWITCHSUMMERTIME_HPP

#include "Time.hpp"

class SwitchSummerTime {
public:
    void operator()(Time& time)
    {
        time.advanceOneHour();
    }
};

#endif  // SWITCHSUMMERTIME_HPP
