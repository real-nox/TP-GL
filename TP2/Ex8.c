#include <stdio.h>

int main() {
    int n, nombre;
    int c = 0;

    do {
    printf("Entrer un entier pisitif :\t");
    scanf("%d", &nombre);
    } while(nombre<0);

    n = nombre;
    do {
        n = n/10;
        c++;
    } while (n != 0);

    printf("Le nombre %d contient %d chiffre", nombre, c);
    
}