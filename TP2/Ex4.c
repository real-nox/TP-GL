#include <stdio.h>

int calculator() {
    double a,b;
    char op;

    printf("Donne moi le premier nombre :\n");
    scanf("%lf", &a);
    
    printf("Donne moi l'opperateur sous forme : (+,-,*,/):\n");
    scanf(" %c", &op);
    
    printf("Donne moi le deuxieme nombre : \n");
    scanf("%lf", &b);

    switch (op)
    {
    case '+':
        printf("La somme est : %lf\n", a+b);
        break;
    case '-':
        printf("La difference est : %lf\n", a-b);
        break;
    case '*':
        printf("Le profuit est : %lf\n", a*b);;
        break;
    case '/':
        if (b!= 0) {
            printf("La division est : %lf\n", a/b);
        } else {
            printf("On ne peut pas diviser par 0");
        }
        break;
    default:
        printf("Vous n'avez pas choisi le bon opperateur arithmetique\n");
        break;
    }
}

int main() {
    printf("\nLa calculatrice :\n");
    calculator();
}