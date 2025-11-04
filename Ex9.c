#include <stdio.h>

int main() {
    double pbrut;
    int pnet, pTVA;

    printf("Le prix d'article : ");
    scanf("%d", &pnet);
    printf("Le pourcentage TVA d'article : ");
    scanf("%d", &pTVA);

    pbrut = ((float)(pTVA)/100) * pnet + pnet;
    printf("Le prix brut est : %f", pbrut);
    return 0;
}