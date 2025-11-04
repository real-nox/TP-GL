#include <stdio.h>

int main() {
    int a, abs;

    printf("Entrer une valeur :\t");
    scanf("%d", &a);

    if (a < 0)
        abs = -a;
    printf("La valeur absolue de %d est : x=%d", a, abs);
}