#ifndef DEF_STUDENT
#define DEF_STUDENT

#include "Human.hpp"

class Student : public Human
{
public:
    Student();
    Student(std::string name);
    Student(std::string name, int m_averageMark);
    void sayHi();
private:
    int m_averageMark;
};

#endif
