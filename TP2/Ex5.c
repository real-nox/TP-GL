#include <stdio.h>

int main() {
    long int s = 0;
    double p = 1;

    for (int i = 1; i<=100; i++) {
        printf("%d\n", p);
        s+=i;
        p*=i;
    }
    printf("La somme des 100 premiers nombres positifs est : %ld\n\n", s);
    printf("Le produit des 100 premier nombres positifs est : %lf", p);
}