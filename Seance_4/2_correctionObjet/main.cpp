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
    // Human bob("Bob");
    Student aliceStud("Alice");
    Teacher johnTeach("John");

    // bob.sayHi();
    // aliceStud.sayHi();
    // johnTeach.sayHi();
    vector<Human *> classList;
    // classList.push_back(new Human("Bob"));
    classList.push_back(new Student("Alice"));
    classList.push_back(new Teacher("John"));


    Human::presentClass(classList);


    // presentItself(&bob);
    presentItself(&aliceStud);
    presentItself(&johnTeach);

}




