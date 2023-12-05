#include <iostream>
#include <string>
#include <vector>
#include "Human.hpp"
#include "Student.hpp"
#include "Teacher.hpp"

using namespace std;


void presentItself(Human *h)
{
    h->sayHi();
}



int main()
{
    Student aliceStud("Alice");

    presentItself(&aliceStud);
}




