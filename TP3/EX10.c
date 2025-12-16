#include <stdio.h>
#include <string.h>

int main() {
    char ch[50];
    int l, p=1;

    printf("Entrer la chaine de caractere \t");
    gets(ch);

    l = strlen(ch);

    if (l%2 !=0) p=0;

    for (int i = 0; i<l/2; i++) {
        if (ch[i] != ch[l/2+i]) {
            p = 0;
            break;
        }
    }

    if (p) {
        printf("Carree");
    } else {
        printf("Pas carree");
    }
}