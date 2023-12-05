typedef struct Restaurant Restaurant;
struct Restaurant {
    char* name;
    int note;
};

typedef struct Element Element;
struct Element
{
    int id;
    Element* next;
};

typedef struct List List;
struct List
{
    Element* first;
};

void tableau();
void string();
void tabString();
void structure();
void tabDynamique();
void listeChainee();
List *initList();
void addElement(List *list, int id);
void removeFirst(List *list);
void printList(List *list);