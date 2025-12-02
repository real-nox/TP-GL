#include <stdio.h>

int main()
{
    int T[50] = {0, 1, 11, 3, 2, 10}, n = 6, X, pos;

    printf("Entrer X : ");
    scanf("%d", &X);

    printf("Donner la position : ");
    scanf("%d", &pos);
    // Premiere case
    if (pos == 0)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            T[i + 1] = T[i];
        }
        T[0] = X;
    }
    else if (pos > 0 && pos < n)
    {
        // Millieu
        for (int j = n - 1; j >= pos; j--)
        {
            T[j + 1] = T[j];
        }
        T[pos] = X;
    }
    else
    {
        // Derniere insertion
        T[n] = X;
        n++;
    }
}