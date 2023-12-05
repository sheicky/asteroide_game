    #include <iostream>
    #include "Human.hpp"

    using namespace std;
    
    Human::Human()
    {

    }

    Human::Human(int age) : m_age(age)
    {
        
    }

    Human::Human(string name)
    {
        m_name = name;
    }

    int Human::getAge()
    {
        return m_age;
    }

    string Human::getName()
    {
        return m_name;
    }

    void Human::setName(std::string name)
    {
    }

    void Human::viellir()
    {
        m_age++;
    }

    void Human::sayHi()
    {
        cout << "Bonjour, je m'appelle " << m_name << endl;
    }
