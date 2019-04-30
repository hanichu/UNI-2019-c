#include <stdio.h>
#include "ricerca.h"

/*
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o ricerca ricerca.c main.c -lm && ./ricerca

*/


int main(){
    int vet[] = {1, 2, 3, 4, 6, 7, 8},
        inf=0, res, sup;
    sup = sizeof(vet)/sizeof(vet[0]);
    res = ricerca(vet, 1, inf, sup);
    printf("%d", res);
    return 0;
}