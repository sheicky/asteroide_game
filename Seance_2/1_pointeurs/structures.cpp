#include <iostream>
#include <string>
#include "structures.hpp"

using namespace std;

void listeChainee()
{
    List *list = initList();
    addFirst(list, 10);
    printList(list);
    addFirst(list, 7);
    addFirst(list, 3);
    printList(list);
    removeFirst(list);
    addLast(list, 5);
    addLast(list, 6);
    printList(list);
    removeFirst(list);
    removeId(list, 5);
    printList(list);
    removeLast(list);
    printList(list);
    removeFirst(list);
    printList(list);
}

List *initList()
{
    List *list = new List;
    list->first = NULL;

    return list;
}


void addFirst(List *list, int id)
{
    if (list != NULL)
    {
        Element *element = new Element;
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
        delete toDelete;
    }
}

void printList(List *list)
{
    if(list != NULL)
    {
        Element *e = list->first;
        cout << "List -> ";
        while (e != NULL)
        {
            cout << e->id << " -> ";
            e = e->next;
        }
        cout << "NULL" << endl;
    }
}

void addLast(List *list, int id)
{
    if(list != NULL)
    {
        Element *toAdd = new Element;
        toAdd->id = id;
        toAdd->next = NULL;

        // Si la liste est vide
        if (list->first == NULL)
        {
            list->first = toAdd;
        }
        Element *e = list->first;
        while (e->next != NULL)
        {
            e = e->next;
        }
        e->next = toAdd;
    }
}

void removeLast(List *list)
{
    // Si la liste est NULL ou vide
    if(list != NULL && list->first != NULL)
    {
        // S'il n'y a qu'un seul élément
        if (list->first->next == NULL)
        {
            delete list->first;
            list->first = NULL;
        }

        Element *e = list->first;
        while (e->next->next != NULL)
        {
            e = e->next;
        }
        delete e->next;
        e->next = NULL;
    }
}

void removeId(List *list, int id)
{
    // Si la liste est NULL ou vide
    if(list != NULL && list->first != NULL)
    {
        Element *e = list->first;
        while (e->next != NULL)
        {
            if (e->next->id == id)
            {
                Element *toDelete = e->next;
                e->next = e->next->next;
                delete toDelete;
            }
            else
            {
                e = e->next;
            }
        }
        
        // Il est ici plus simple de traiter le premier élément à la fin
        // Voir README
        if (list->first->id == id)
        {
            Element *toDelete = list->first;
            list->first = toDelete->next;
            delete toDelete;
        }
    }
}