#include <iostream>
#include <string>

using namespace std;

struct Element
{
    int id;
    Element* next;
};

struct List
{
    Element* first;
};

void listeChainee();

List *initList();

void addFirst(List *list, int id);

void removeFirst(List *list);

void printList(List *list);

// Ajouter une fonction qui ajoute un element à la fin
void addLast(List *list, int id);

// Ajouter une fonction qui supprime le dernier element d'une liste
void removeLast(List *list);

// Ajouter une fonction qui supprime tous les éléments ayant un id donné
void removeId(List *list, int id);
