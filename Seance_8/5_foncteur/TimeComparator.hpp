#ifndef TIMECOMPARATOR_HPP
#define TIMECOMPARATOR_HPP

#include "Time.hpp"

class TimeComparator {
public:
    bool operator()(const Time& t1, const Time& t2) const
    {
        if (t1.getHours() == t2.getHours()) 
        {
            return t1.getMinutes() < t2.getMinutes();
        }
        return t1.getHours() < t2.getHours();
    }
};

#endif  // TIMECOMPARATOR_HPP
