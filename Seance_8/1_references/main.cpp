#include <iostream>

using namespace std;

// Fonction pour échanger les valeurs de deux entiers en utilisant des références
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int originalVariable = 42;
    int& reference = originalVariable; // Déclaration et initialisation d'une référence

    cout << "Original Variable: " << originalVariable << endl;
    cout << "Reference: " << reference << endl;

    reference = 99; // Modification de la référence

    cout << "Original Variable après modification : " << originalVariable << endl;
    cout << "Reference après modification : " << reference << endl;

    int x = 5;
    int y = 10;

    cout << "Avant l'échange : x = " << x << ", y = " << y << endl;

    // Appel de la fonction swap pour échanger les valeurs de x et y
    swap(x, y);

    cout << "Après l'échange : x = " << x << ", y = " << y << endl;

    return 0;
}
