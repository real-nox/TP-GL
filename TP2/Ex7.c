#include <stdio.h>

int main() {
    int n;
    float s = 0;

    do {
        printf("Entrer un entier entre 10 et 20 :\t");
        scanf("%d", &n);
    } while(n<10 || n>20);

    printf("La somme harmoniq est : S = ");

    for(int i=1; i<=n; i++) {
        s= (float)(1/(float)(i)) + s;

        if(i==n)
            printf("1/%d ", i);
        else
            printf("1/%d + ", i);
    }
    printf("= %f", s);
}