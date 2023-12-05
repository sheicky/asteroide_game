#include <iostream>
#include <string>
#include "Human.hpp"
#include "Student.hpp"
#include "Teacher.hpp"

using namespace std;


void presentItself(Human h)
{
    h.sayHi();
}

int main()
{
    Human bob("Bob");
    Student aliceStud("Alice");
    Teacher johnTeach("John");
    
    bob.sayHi();
    aliceStud.sayHi();
    johnTeach.sayHi();
}




