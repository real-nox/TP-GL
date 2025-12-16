//Transposé de la matrice

#include <stdio.h>

int main() {
    int M[50][50], n;

    do {
    printf("Entrer la taille de la matrice carre :\t");
    scanf("%d", &n);
    } while ((n>50 || n<0) && n%2!=0);

    for (int i = 0; i<n; i++) {
        printf("\nEntrer les 2 valeur de l\'element %d ", i+1);
        for (int j = 0; j<n; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    printf("\n");
    for (int k = 0; k<n; k++) {
        for (int l = 0; l<n; l++) {
            printf("%d ", M[l][k]);
        }
        printf("\n");
    }
}