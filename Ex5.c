#include <stdio.h>

int type_f(int valeur, char name) {
    printf("La valeur de %c?\n", name);
    
    switch (name)
    {
    case 'i':
        scanf("%d", &valeur);
        break;
    case 'j':
        scanf("%hd", &valeur);
        break;
    case 'k':
        scanf("%li", &valeur);
        break;
    case 'x':
        scanf("%f", &valeur);
        break;
    case 'y':
        scanf("%lf", &valeur);
        break;
    case 'z':
        scanf("%Lf", &valeur);
        break;
    case 'c':
        scanf(" %c", &valeur);
        break;
    }
    printf("La value est : %d, et l'adresse est : %d\n",valeur, &valeur);
    return 0;
}

int main() {
    int i;
    type_f(i, 'i');

    short int j;
    type_f(j, 'j');

    long int k;
    type_f(k, 'k');

    float x;
    type_f(x, 'x');

    double y;
    type_f(y, 'y');

    long double z;
    type_f(z, 'z');

    char c;
    type_f(c, 'c');
}