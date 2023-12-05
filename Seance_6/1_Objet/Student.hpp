#ifndef DEF_STUDENT
#define DEF_STUDENT

#include "Human.hpp"
#include "Computer.hpp"

class Student : public Human
{
public:
    Student();
    ~Student();
    Student(std::string name);
    Student(std::string name, int m_averageMark);
    void sayHi();
private:
    Computer m_pc;
    int m_averageMark;
};

#endif
