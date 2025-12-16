#include <stdio.h>

int main() {
    int M[50][50], n;
    float X, T[50][50];

    do {
    printf("Entrer la taille de la matrice carre :\t");
    scanf("%d", &n);
    } while ((n>50 || n<0) && n%2!=0);

    for (int i = 0; i<n; i++) {
        printf("\nEntrer les 2 valeur de l\'element %d", i+1);
        for (int j = 0; j<n; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    printf("\n\nentrer X :\t");
    scanf("%f", &X);

    for (int k = 0; k<n; k++) {
        for (int l = 0; l<n; l++) {
            T[k][l] = (M[k][l])*X;
            printf("%.2f ", T[k][l]);
        }
        printf("\n");
    }
}