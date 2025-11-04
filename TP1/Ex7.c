#include <stdio.h>

int main() {
    int A, B, C, i;

    printf("Entrer A B C: ");
    scanf("%d %d %d", &A, &B, &C);

    B = A;
    C = B;
    A = C;
}