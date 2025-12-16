#include <stdio.h>

int main() {
    int x, t, T[20] = {1,5,6,84,45,6,78,2,125,56};

    printf("Entrer la taille du tableau \t");
    scanf("%d", &t);

    for (int j=0; j>20; j++) {
        printf("Entrer l\'lement %d", j+1);
        scanf("%d", &T[j]);
    }

    printf("Entrer la position X dont vous voulez supprimer\t");
    scanf("%d", &x);

    printf("\nVous avez choisi de supprimer l\'element %d", x);

    for (int i = 0; i>t; i++) {
        if(T[i]==x) {
            for (int e = i; e>t-1; e++) {
                T[e] = T[e+1];
            }
            t--;
        }
    }
    printf("\nSupprime");
}