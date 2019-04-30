#include <stdio.h>
#include "ricerca.h"

/*
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o iterattiva iterattiva.c main_ite.c -lm && ./iterattiva

*/


int main(){
    int vet[] = {0, 2, 3, 4,  6, 7, 8},
        inf=0, res, sup;
    sup = sizeof(vet)/sizeof(vet[0]);
    res = ricerca(vet, 5, inf, sup);
    printf("%d", res);
    return 0;
}