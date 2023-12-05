#include <iostream>
#include <string>
#include <vector>


using namespace std;


bool connect(string pass)
{
    string password = "no0neK^ow";
    if (pass == password)
        return true;
    return false;
}



int main()
{
    while (true) 
    {
        string pass;
        cout << "Entrez le mot de passe : ";
        cin >> pass;
        if (connect(pass))
            break;
        cout << "Mauvais mot de passe" << endl << endl;
    }

    cout << "Vous etes connecte !" << endl;
    getchar();
}




