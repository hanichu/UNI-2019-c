#include <stdio.h>
/*da una sequenza di numeri, trova il massimo*/

int main(){
    int c, n, max, i;
    printf("Inserisci il numero di numeri che vuoi confrontare: ");
    scanf("%d", &c);

    for (i = 1; i <= c; i++){

        printf("Inserisci il %d° numero: ", i);
        scanf("%d", &n);
        if (max<n) max = n;
    }
    printf("Il numero massimo della sequenza è: %d \n", max);
    return 0;
}

