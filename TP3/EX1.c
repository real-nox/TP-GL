#include <stdio.h>

int main() {
    int T[50], val = 0,NO = 0;

    for (int i = 0; i < 50; i++) {
        printf("Entrer la valeur %d:\t",i+1);
        scanf("%d", &T[i]);
    }

    printf("\nEntrer la valeur dont vous chercher : ");
    scanf("%d", &val);

    for (int j = 0; j < 50; j++) {
        if (T[j] == val)
            NO+=1;
    }

    printf("\nLe nombre d'occurence pour la valeur %d est %d", val, NO);
}