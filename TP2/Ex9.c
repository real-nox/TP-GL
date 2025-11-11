#include <stdio.h>
#include <math.h>

int main() {
    int s = 0;
    int n;

    do {
        printf("Entrer un entier >=1 :\t");
        scanf("%d", &n);
    } while(n<1);

    for (int k=1; k<=n;k++)
        s = pow(k, 2) + s;
    
    printf("Le resultat est : %d", s);
}