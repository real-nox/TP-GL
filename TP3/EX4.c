//Ecrire un programme C qui permet d’afficher si une valeur X existe dans un tableau Tab de N réels ou non
#include <stdio.h>
#define max 50

int main() {
    float T[max], X;
    int n, st=0, last=0, NO=0;

    do {
    printf("Entrer la taille du tableau :");
    scanf("%d", &n);
    } while (n<0 || n>50);

    for (int i = 0; i < n; i++) {
        printf("Entrer la valeur %d:\t",i+1);
        scanf("%f", &T[i]);
    }

    printf("\nEntrer la valeur dont vous chercher : ");
    scanf("%f", &X);

    for (int j = 0; j < n; j++) {
        if (T[j] == X)
            NO++;
            last = j;
            if (NO == 1) st = j;
    }

    printf("\nValeur %.2f est trouve N %d! l'indice 1st : %d et last : %d", X, NO, st, last);
}