    #include <iostream>
    #include "Human.hpp"

    using namespace std;

    int Human::nbHuman = 0;
    
    void Human::presentClass(vector<Human* > classList)
    {
        for (int i = 0; i < classList.size(); i++)
        {
            classList[i]->sayHi();
        }
    }
    int Human::getHumanNb()
    {
        return Human::nbHuman;
    }
    Human::Human()
    {
        Human::nbHuman++;
    }

    Human::Human(int age) : m_age(age)
    {
        Human::nbHuman++;
    }

    Human::Human(string name)
    {
        m_name = name;
        Human::nbHuman++;
    }

    Human::~Human()
    {
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

    // void Human::sayHi()
    // {
    //     cout << "Bonjour, je m'appelle " << m_name << endl;
    // }
