#include <iostream>

using namespace std;

void pointers()
{
    int a = 3; // Une variable
    int *pt(0); // Un pointeur (initialisé à 0)
    pt = &a; // pt pointe vers a
    cout << "La valeur de a est" << *pt << endl;
}

// Affichez le contenue d'une variable et son addresse
void showAddress(int a)
{
    cout << "La variable a " << a << " à pour addresse " << &a << endl;
}

// Affichez le contenue d'une variable et son addresse
void showAddress2(int *a)
{
    cout << "La variable a " << *a << " à pour addresse " << a << endl;
}

// Echanger le contenue de variables a et b
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// Ecrire une fonction de type void qui double la valeur d'un int
void doubleint(int *a)
{
    *a +=*a;
}