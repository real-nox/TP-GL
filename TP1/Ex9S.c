#include <stdio.h>

int main() {
    double pnet, pbrut;
    int pTVA;

    printf("Le prix brut d'article : ");
    scanf("%lf", &pbrut);
    printf("Le pourcentage TVA d'article : ");
    scanf("%d", &pTVA);

    pnet = pbrut/((float)(pTVA)/100 + 1);
    printf("Le prix net est : %f", pnet);
    return 0;
}