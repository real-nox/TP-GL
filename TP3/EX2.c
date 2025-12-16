//Ecrire un programme C qui permet d’afficher si une valeur X existe dans un tableau Tab de N réels ou non
#include <stdio.h>
#define max 50

int main() {
    float T[max], X;
    int res = 0, n;

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

    /*for (int j = 0; j < n; j++) {
        if (T[j] == X)
            res = 1;
            break;
    }*/

    //Ou recherche dichotomique sur tableau trier
    int debut = 0;
    int m, fin = n;
    
    while (fin >= debut)
    {
        m = (debut+fin)/2;

        if (T[m]==X) {
            printf("Yay found");
            break;
        } else if (X < T[m]) {
            fin = m-1;
        } else {
            debut = m+1;
        }
    }
    



    if (res = 1)
        printf("\nValeur %.2f est trouve!", X);
    else
        printf("\nValeur %.2f introuvable", X);
}