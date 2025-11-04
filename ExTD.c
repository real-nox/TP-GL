#include <stdio.h>
#define max 5

int main(int argc, char const *argv[])
{
    int T1[max], T2[max], T3[2*max];

    printf("Donner les %d valeurs de T1 et T2", max);
    for (int i = 0; i < max; i++)
        scanf("%d", &T1[i]);
 
    for (int k = 0; k < 5; k++)
        scanf("%d", &T2[k]);

    for (int y = 0; y < 10; y++) {
        if (y < 5)
            T3[y] = T1[y];
        else
            T3[y] = T2[y-5];

        printf("%d \t", T3[y]);
    }
    
    return 0;
}