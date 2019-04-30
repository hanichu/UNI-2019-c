#include <stdio.h>
#include "insiemi.h"

/*

gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o insiemi insiemi.c main.c -lm && ./insiemi


*/

int main(){
    int x, i, res;
    insieme A, B, intersezione, unione, differenza;
    inizializza_insieme(A);
    inizializza_insieme(B);
    inizializza_insieme(intersezione);
    inizializza_insieme(unione);
    inizializza_insieme(differenza);

    /*riempio l'insieme A con numeri fino al 20 e lo stampo*/
    for(x=1; x<21; x++){
        inserisci_elemento_insieme(A, x);
    }

    printf("\nInsieme A:\n");
    for(i=0; i<=A[0]; i++){
        printf("%d\t", A[i]);
    }

    /*riempio l'insieme B con numeri pari e lo stampo*/
    for(x=1; x<50; x++){
        if(x%2==0)
        inserisci_elemento_insieme(B, x);
    }

    printf("\n\nInsieme B:\n");
    for(i=0; i<=B[0]; i++){
        printf("%d\t", B[i]);
    }

    x=3;

    res = insieme_contiene(A, x);
    if(!res){
        printf("\n\nA non contine il #%d\n", x);
    }else{
        printf("\n\nA contiene il #%d\n", x);
    }
    res = elimina_elemento_insieme(A, x);
    if(!res){
        printf("\nNon ho eliminato il #%d da A\n", x);
    }else{
        printf("\nHo eliminato #%d da A\nInsieme A aggiornato:\n", x);
        for(i=0; i<=A[0]; i++){
            printf("%d\t", A[i]);

        }
    }


    printf("\n\nL'intersezione tra A e B:\n");
    intersezione_insiemi(A, B, intersezione);
    for(i=0; i<=intersezione[0]; i++){
        printf("%d\t", intersezione[i]);
    }

    printf("\n\nL'unione tra A e B:\n");
    unione_insiemi(A, B, unione);
    for(i=0; i<=unione[0]; i++){
        printf("%d\t", unione[i]);
    }

    printf("\n\nLa differenza tra A e B:\n");
    differenza_insiemi(A, B, differenza);
    for(i=0; i<=differenza[0]; i++){
        printf("%d\t", differenza[i]);
    }

    printf("\n\nInsieme unione ordinato:\n");
    ordina_insieme(unione);
    for(i=0; i<=unione[0]; i++){
        printf("%d\t", unione[i]);
    }

    printf("\n\n");
    return 0;
}