#include <stdio.h>
#include <stdlib.h>

#include "main.h"

int main()
{
    tableau();
    string();
    tabString();
    structure();
    tabDynamique();
    listeChainee();
    initList();
}

void tableau()
{
    char tab[4] = {'a', 'b', 'c', 'd'};
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        printf("A la position %d : %c\n", i, tab[i]);
    }
}

void string()
{
    char mot[] = "Hello";
    char mot2[6];
    mot2[0] = 'S';
    mot2[1] = 'a';
    mot2[2] = 'l';
    mot2[3] = 'u';
    mot2[4] = 't';
    mot2[5] = '\0';
    char ligne[100];
    printf("Entrez un mot : ");
    scanf("%s", ligne);
    printf("%s %s %s\n", mot, mot2, ligne);
}

void tabString()
{

    char* tab[3];
    tab[0] = "test";
    tab[1] = "de";
    tab[2] = "tableau";

    int i = 0;
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", tab[i]);
    }
}

void structure()
{
    Restaurant resto;
    resto.name = "O'terminus";
    resto.note = 3;

    printf("Nom : %s note : %d\n", resto.name, resto.note);
}

void tabDynamique()
{
    int nb = 0;
    printf("Entrez une taille : ");
    scanf("%d", &nb);
    char *tab = (char*)malloc(sizeof(int)*nb);
    int i = 0;
    for (i = 0; i < nb; i++)
    {
        tab[i] = i*2;
        printf("A la position %d : %d\n", i, tab[i]);
    }
}

void listeChainee()
{
    List *list = initList();
    addElement(list, 10);
    printList(list);
    addElement(list, 7);
    addElement(list, 3);
    printList(list);
    removeFirst(list);
    printList(list);
    removeFirst(list);
    removeFirst(list);
    printList(list);
}

List *initList()
{
    List *list = malloc(sizeof(List));
    list->first = NULL;

    return list;
}

void addElement(List *list, int id)
{
    if (list != NULL)
    {
        Element *element = malloc(sizeof(Element));
        element->next = list->first;
        element->id = id;
        list->first = element;
    }
}

void removeFirst(List *list)
{
    if (list != NULL && list->first != NULL)
    {
        Element *toDelete = list->first;
        list->first = list->first->next;
        free(toDelete);
    }
}

void printList(List *list)
{
    if(list != NULL)
    {
        Element *e = list->first;
        printf("List -> ");
        while (e != NULL)
        {
            printf("%d -> ", e->id);
            e = e->next;
        }
        printf("NULL\n");
    }
}
