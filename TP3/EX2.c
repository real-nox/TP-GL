//Ecrire un programme C qui permet d’afficher si une valeur X existe dans un tableau Tab de N réels ou non
#include <stdio.h>
#define max 50

int main() {
    float T[max], X;
    int res = 0;

    for (int i = 0; i < max; i++) {
        printf("Entrer la valeur %d:\t",i+1);
        scanf("%f", &T[i]);
    }

    printf("\nEntrer la valeur dont vous chercher : ");
    scanf("%f", &X);

    for (int j = 0; j < max; j++) {
        if (T[j] == X)
            res = 1;
            break;
    }

    if (res = 1)
        printf("\nValeur %.2f est trouve!", X);
    else
        printf("\nValeur %.2f introuvable", X);
}