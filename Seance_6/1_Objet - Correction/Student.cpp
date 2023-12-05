#include <iostream>
#include "Student.hpp"

using namespace std;

Student::Student()
{

}

Student::~Student()
{
    delete m_pc;
}

Student::Student(std::string name) : Human(name)
{
    m_pc = new Computer(450);
}

Student::Student(std::string name, int averageMark) : Human(name), m_averageMark(averageMark)
{
    
}

void Student::sayHi()
{
    cout << "Bonjour, je m'appelle " << m_name << " et je suis étudiant" << endl;
}

