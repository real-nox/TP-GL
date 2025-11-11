//Calculatrice
#include <stdio.h>

void calculator(double a, double b, char op) {
    switch (op)
    {
    case '+':
        printf("La somme est : %.2lf\n", a+b);
        break;
    case '-':
        printf("La difference est : %.2lf\n", a-b);
        break;
    case '*':
        printf("Le profuit est : %.2lf\n", a*b);;
        break;
    case '/':
        b==0 ? printf("On ne peut pas diviser par 0") : printf("La division est : %.2lf\n", a/b);
        break;
    default:
        printf("Vous n'avez pas choisi le bon opperateur arithmetique\n");
        break;
    }
}

int main() {
    printf("\nLa calculatrice :\n");
    double a,b;
    char op;

    printf("Donne moi le premier nombre :\n");
    scanf("%lf", &a);
    
    printf("Donne moi l'opperateur sous forme : (+,-,*,/):\n");
    scanf(" %c", &op);
    
    printf("Donne moi le deuxieme nombre : \n");
    scanf("%lf", &b);

    calculator(a, b, op);
}