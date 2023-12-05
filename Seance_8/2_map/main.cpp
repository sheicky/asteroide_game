#include <iostream>
#include <map>

using namespace std;

int main() {
    // Création d'une map avec des int comme clés et des chaînes de caractères comme valeurs
    map<int, string> studentGrades;

    // Ajout d'éléments à la map
    studentGrades[1001] = "A";
    studentGrades[1002] = "B";
    studentGrades[1003] = "C";
    studentGrades[1004] = "A";
    studentGrades[1005] = "B";

    cout << "La note de l'étudiant 1003 est : " << studentGrades[1003] << endl;

    // Vérifier si une clé existe dans la map
    if (studentGrades.find(1004) != studentGrades.end()) {
        cout << "L'étudiant 1004 est dans la liste." << endl;
    }

    // Parcourir la map et afficher toutes les notes
    cout << "Toutes les notes des étudiants : " << endl;
    for (const pair<int, string>& pair : studentGrades) {
        cout << "Étudiant " << pair.first << " : " << pair.second << endl;
    }

    return 0;
}