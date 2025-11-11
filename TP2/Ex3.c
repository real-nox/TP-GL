#include <stdio.h>

int main() {
    int n;
    float total;

    printf("Combient de photocopies vous voulez effectuees? :\n");
    scanf("%d", &n);

    if (n<=10)
        total = n;
    else if (n>10 && n<=30)
        total = 10 + (n-10)*0.6;
    else
        total = 10+ 20*0.6+(n-30)*0.4;

    printf("Vous avez effectuez %d photocopies, le prix total sera : %f", n, total);
}