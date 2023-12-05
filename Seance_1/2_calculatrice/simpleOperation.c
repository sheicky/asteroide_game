#include <stdio.h>
#include <stdlib.h>


void addition(int a, int b)
{
    printf("%d + %d = %d", a, b, a+b);
}

void soustraction(int a, int b)
{
    printf("%d - %d = %d", a, b, a-b);
}

void mutipplication(int a, int b)
{
    printf("%d x %d = %d", a, b, a*b);
}

void division(int a, int b)
{
    if (b == 0)
    {
        printf("ERREUR : Impossible de diviser par 0");
    }
    printf("%d / %d = %d reste %d", a, b, a/b, a%b);
}