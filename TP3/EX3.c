#include <stdio.h>

int main() {
    int n, min = 0;

    do {
    printf("Entrer la taille du tableau :");
    scanf("%d", &n);
    } while (n<0 || n>50);

    float T[n];
    for (int i = 0; i < n; i++) {
        printf("Entrer la valeur %d:\t",i+1);
        scanf("%f", &T[i]);
    }

    //Trie par selection
    int tmp;
    for (int j = 0; j < n; j++) {
        min = j;
        for (int k = j+1; k < n; k++ ) {
            if (T[k]< T[min]) 
                min = k;
        }

        if (min != j) {//Permutation (changement de val pour deux cases)
            tmp = T[j];
            T[j] = T[min];
            T[min] = tmp;
        }
    }

    //Trie a bulle
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            if (T[j]>T[j+1]) {
                tmp = T[j];
                T[j] = T[j+1];
                T[j+1] = tmp;
            }
        }
    }

    //Trie par insertion
    int j;
    for (int i =1;i<n;i++) {
        tmp = T[i];
        j = i -1;
        while (j>=0 && T[j] > tmp)
        {
            T[j+1] = T[j];
            j--;
        }
        T[j+1] = tmp;
        
    }
}