#include <stdio.h>
#include "es2C.h"

/*

RICORDARSI di compilare con:
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o es2C es2C.c main2C.c -lm && ./es2C

IMPORTANTE:
NON CONSEGNARE I FILE CONTENENTI main E GLI HEADER

*/


char M[RIGHE][COLONNE] = {
    { 'x', 'x', 'x', 'j', 'o', 'j', 'x', 'x', 'x' },
    { 'x', 'x', 'j', 'o', 'j', 'x', 'o', 'x', 'x' },
    { 'x', 'x', 'x', 'j', 'x', 'o', 'x', 'j', 'x' },
    { 'x', 'o', 'x', 'o', 'x', 'o', 'x', 'o', 'x' }

};

int main() {
    int res;
    char s[]="xox";
    res = contaOccorrenze(s, M);
    printf("\n\tRisultato = %d\n\n", res);
    return 0;
}
