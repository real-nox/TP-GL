#include <stdio.h>
#include <string.h>

int main() {
    char ch[50];
    int l, p=1;

    printf("Entrer la chaine de caractere \t");
    gets(ch);

    l = strlen(ch);

    for (int i = 0; i<l/2; i++) {
        if (ch[i] != ch[l-1-i]) {
            p = 0;
            break;
        }
    }

    if (p) {
        printf("Palindrome");
    } else {
        printf("Pas palindrome");
    }
}