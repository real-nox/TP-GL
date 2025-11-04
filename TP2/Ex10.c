#include <stdio.h>

int main() {
    int s = 0;
    int e;
    
    start:
    printf("Entrer un entier strictement positif: \t");
    scanf("%d", &e);

    if (e<0) {
        printf("Invalide retour...\n");
        goto start;
    } else {
        for (int i=1; i<=e; i++) {
            s+= i;
            if (i==e) 
                printf("%d", i);
            else
                printf("%d + ", i);
        }
        printf(" = %d",s);
    }
}