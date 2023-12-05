#include <stdio.h>
#include <stdlib.h>

#include "simpleOperation.h"

int main()
{

    printf("Calculatrice");
    while (1)
    {
        int choice = 0, a = 0, b = 0;
        printf("\n\nSélectionnez l'opération :\n1 - addition\n2 - soustraction\n");
        printf("3 - multiplication\n4 - division\n");
        scanf("%d", &choice);
        printf("Entrez les operateurs :\na = ");
        scanf("%d", &a);
        printf("b = ");
        scanf("%d", &b);

        switch (choice)
        {
        case 1:
            addition(a, b);
            break;
        case 2:
            soustraction(a, b);
            break;
        case 3:
            mutipplication(a, b);
            break;
        case 4:
            division(a, b);
            break;

        default:
            break;
        }
    }
    return 0;
}
