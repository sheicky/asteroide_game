#ifndef DEF_HUMAN
#define DEF_HUMAN

#include <string>

class Human
{
    public:
    // Constructeurs
    Human();
    Human(int age);
    Human(std::string name);

    // Getter et setter
    int getAge();
    std::string getName();
    void setName(std::string name);

    // Methodes
    void viellir();
    void sayHi();

protected:
    // Attributs protégés
    std::string m_name;
private:
    // Attributs privés
    int m_age;
};

#endif