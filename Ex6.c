#include <stdio.h>

int main() {
    int j,m, a;

    printf("Introduisez la date (jour mois annee) : ");
    scanf("%d %d %d", &j, &m, &a);
    printf("donnees recues : 3 jours:%d mois:%d annee:%d", j, m, a);
}