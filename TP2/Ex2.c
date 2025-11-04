#include <stdio.h>

int main() {
    double R1, R2, R3, Req;
    char rep;
    
    printf("Veuiller entrer R1, R2, R3 :\n");
    scanf("%lf %lf %lf", &R1, &R2, &R3);

    printf("Est ce que les resistances sont branchees en serie? [Y/N]");
    scanf(" %c", &rep);

    switch (rep)
    {
    case 'Y':
        Req = R1 + R2 + R3;
        printf("Le resultat branchees en serie :\n");
        break;
    case 'N':
        Req = ((R1*R2)+ (R2*R3) + (R3*R1))/R1*R2*R3;
        printf("Le resultat branchees en parallele :\n");
    default:
        printf("By default les resistances sont branchees en serie vue que vous n'avez pas reponder a la question correctement :\n");
        Req = R1 + R2 + R3;
        break;
    }
    printf("%lf", Req);
}