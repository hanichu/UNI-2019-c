#include <stdio.h>
#include "ordinati.h"

/*

gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o ordinati ordinati.c main.c -lm && ./ordinati

*/

int main(){
    insieme A;
    int i;
    inizializza_insieme(A);

    inserisci_elemento_insieme(A, 2);
    inserisci_elemento_insieme(A, 3);
    inserisci_elemento_insieme(A, 1);

    for(i=1; i<=A[0]; i++){
        printf("\n%d", A[i]);
    }
    return 0;
}