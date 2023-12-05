#ifndef DEF_TEACHER
#define DEF_TEACHER

#include "Human.hpp"

class Teacher : public Human
{
public:
    Teacher();
    Teacher(std::string name);
    void sayHi();
private:
};

#endif
