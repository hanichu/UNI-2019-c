#include <stdio.h>
#include "palline.h"

/*
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o palline palline.c main.c -lm && ./palline

*/


int main(){
    int res, n = 5;
    char cima = 'v';
    res = palline(n, cima);
    printf("\nRisultato = %d\n", res);
    return 0;
}