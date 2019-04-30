#include "ricerca.h"
#include <stdio.h>

/*
Dato un array ordinato, dire in quale posizione si trova un certo elemento,
restituire -1 altrimenti
*/

int ricerca(int vet[], int e, int inf, int sup){
    int m;

    do{
        m=(inf+sup)/2;
        if(vet[m]>e) sup = m;
        if(vet[m]<e) inf = m;
        if(sup-inf==1) m--;
    }while(sup-inf>1&&vet[m]!=e);

    if(vet[m]!=e) return -1;
    else return m;
}