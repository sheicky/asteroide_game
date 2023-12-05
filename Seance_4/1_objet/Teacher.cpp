#include <iostream>
#include "Teacher.hpp"

using namespace std;

Teacher::Teacher()
{

}

Teacher::Teacher(std::string name) : Human(name)
{

}

void Teacher::sayHi()
{
    cout << "Bonjour, je m'appelle " << m_name << " et je suis prof" << endl;
}

