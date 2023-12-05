#include <iostream>
#include "Student.hpp"

using namespace std;

Student::Student()
{

}

Student::~Student()
{
}

Student::Student(std::string name) : Human(name)
{
}

Student::Student(std::string name, int averageMark) : Human(name), m_averageMark(averageMark)
{
    
}

void Student::sayHi()
{
    cout << "Bonjour, je m'appelle " << m_name << " et je suis étudiant" << endl;
}

