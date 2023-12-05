#include <iostream>

using namespace std;

void dynamic()
{
    int *pt(0);     // Un pointeur (initialisé à 0)
    pt = new int;   // Allocation de la mémoire 
    *pt = 5;        // Initialisation de la variable
    cout << "La valeur est" << *pt << endl;
    delete pt;      // Libération de la mémoire
    pt = 0;         // Remise du pointeur à 0
}

void tabDynamic()
{
    int taille(4);
    int *tab(0);
    tab = new int[taille];

    for (int i = 0; i < taille; i++)
    {
        tab[i] = i*2;
    }

    for (int i = 0; i < taille; i++)
    {
        cout << tab[i] << endl;
    }

    delete[] tab;
    tab = 0;
}

// Ecrire une fonction qui demande à l'utilisateur le nombre de case d'un tableau, 
// l'initialise, puis lui demande de le remplir puis l'afficher

void userTab()
{
    int taille(0);
    cout << "Entrez une taille : ";
    cin >> taille;
    int *tab(0);
    tab = new int[taille];

    for (int i = 0; i < taille; i++)
    {
        cout << "Entrez l'élément " << i << " : ";
        cin >> tab[i];
    }

    for (int i = 0; i < taille; i++)
    {
        cout << tab[i] << endl;
    }

    delete[] tab;
    tab = 0;
}

// Même chose que l'exercice précédent, mais en 2 dimentions
void userTab2D()
{
    int tailleX(0), tailleY(0);
    cout << "Entrez une taille x : ";
    cin >> tailleX;
    cout << "Entrez une taille y : ";
    cin >> tailleY;
    int **tab(0);
    tab = new int*[tailleY];

    for (int i = 0; i < tailleY; i++)
    {
        tab[i] = new int[tailleX];
        for (int j = 0; j < tailleX; j++)
        {
            cout << "Entrez l'élément [" << i <<";"<< j << "] : ";
            cin >> tab[i][j];
        }
        
    }

    for (int i = 0; i < tailleY; i++)
    {
        for (int j = 0; j < tailleX; j++)
        {
            cout << tab[i][j] << "\t";
        }
        cout << endl;
        
    }

    // Il est nécessaire de supprimer chaque sous tableau 
    // avant de supprimer le tableau principal
    for (int i = 0; i < tailleY; i++)
    {
        delete[] tab[i];
    }
    delete[] tab;
    tab = 0;
}