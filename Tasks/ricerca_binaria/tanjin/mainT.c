#include <stdio.h>
#include "ricerca.h"

/*
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o ricerca ricerca.c mainT.c -lm && ./ricerca

*/


int main(){
    int vet[] = {0, 2, 3, 4,  6, 7, 8}, res, sup;
    sup = sizeof(vet)/sizeof(vet[0]);
    res = ricerca_binaria_iterativo(vet, sup, 9);
    printf("%d", res);
    return 0;
}