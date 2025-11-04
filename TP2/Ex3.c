#include <stdio.h>

int main() {
    int n;
    float total;

    printf("Combient de photocopies vous voulez effectuees? :\n");
    scanf("%d", &n);

    if (n<=10)
        total = n*1;
    else if (n>10 && n<=20)
        total = (float)(n)*0.6;
    else if (n>20)
        total = (float)(n)*0.4;

    printf("Vous avez effectuez %d photocopies, le prix total sera : %f", n, total);
}