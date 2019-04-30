#include <stdio.h>

/*Trova il massimo di una sqeuenza di  numeri che termina
quando due numeri inseriti consecutivi sono uguali*/

int n, prev, max, c;

int main(){

    printf ("Inserisci il primo numero: ");
    scanf ("%d", &n);
    max = n;


    do {

        prev = n;

        printf ("Inserisci il prossimo numero: ");
        scanf ("%d", &n);

        if (n > max) max = n;

    } while (prev != n);

    printf ("Il valore massimo della sequenza è: ");
    printf ("%d \n", max);
    return 0;

}