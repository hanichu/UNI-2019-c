#include <stdio.h>


/*
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o max massimo.c  -lm && ./max

*/

int max(int vet[], int dim){
    if (dim==1) return dim;
    else{
        int mass;
        mass = max(vet, dim-1);
        return (mass<vet[dim-1])?dim-1:mass;
    }
}

int main(){
    int vet[]={1, 2, 4,3 ,5, 2, -10, 5, 3}, dim, res;
    dim= sizeof(vet)/sizeof(vet[0]);
    res = max(vet, dim);
    printf("\n%d\n", res);
    return 0;
}