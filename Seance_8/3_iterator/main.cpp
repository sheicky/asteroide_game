#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Création d'un vecteur de nombres entiers
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Utilisation d'un itérateur pour parcourir le vecteur
    vector<int>::iterator it;  // Déclaration de l'itérateur

    cout << "Les éléments du vecteur sont : ";
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        // Affichage de la valeur pointée par l'itérateur
        cout << *it << " ";
    }

    cout << endl;

    // Initialisation de l'itérateur sur la troisième position du vector
    vector<int>::iterator itMid = numbers.begin() + 2;
    cout << *itMid << endl;
    
    // Suppression de l'élément
    numbers.erase(itMid);

    for (it = numbers.begin(); it != numbers.end(); ++it) {
    // Affichage de la valeur pointée par l'itérateur
    cout << *it << " ";
    }

    return 0;
}