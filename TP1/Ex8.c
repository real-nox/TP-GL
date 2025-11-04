#include <stdio.h>

int main() {
    int a, b;

    printf("Entrer A et B :\n");
    scanf("%d %d", &a, &b);

    if (b>a)
        return -1;

    printf("Le quotient : %d et le reste : %d de la division entiere entre A et B\n", a/b, a%b);
    printf("Le quotient rationnel est : %f\n", (float)((float)(a)/(float)(b)));

    return 0;
}