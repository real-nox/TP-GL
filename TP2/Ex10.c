#include <stdio.h>

int main()
{
    int s = 0, e, i = 1;

start:
    printf("Entrer un entier strictement positif: \t");
    scanf("%d", &e);

    if (e < 0)
    {
        printf("Invalide retour...\n");
        goto start;
    }
    else
    {
    somme:
        s += i;
        if (i == e)
            printf("%d", i);
        else
            printf("%d + ", i);
        i++;
        if (i <= e)
            goto somme;
        printf(" = %d", s);
    }
}