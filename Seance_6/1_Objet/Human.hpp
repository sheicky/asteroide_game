#ifndef DEF_HUMAN
#define DEF_HUMAN

#include <string>
#include <vector>

class Human
{
    public:
    // Constructeurs
    Human();
    Human(int age);
    Human(std::string name);

    // Destructeur 
    ~Human();

    // Getter et setter
    static void presentClass(std::vector<Human*> classList);
    static int getHumanNb();
    int getAge();
    std::string getName();
    void setName(std::string name);

    // Methodes
    void viellir();
    virtual void sayHi() = 0;

protected:
    // Attributs protégés
    std::string m_name;
private:
    // Attributs privés
    static int nbHuman;
    int m_age;
};

#endif