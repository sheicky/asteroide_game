#ifndef TIME_HPP
#define TIME_HPP

class Time {
public:
    Time(int hours, int minutes);

    int getHours() const;
    int getMinutes() const;
    void advanceOneHour();

private:
    int hours_;
    int minutes_;
};

#endif  // TIME_HPP
