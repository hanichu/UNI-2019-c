#include "ricerca.h"

/*
Dato un array ordinato, dire in quale posizione si trova un certo elemento,
restituire -1 altrimenti
*/

int ricerca(int vet[], int e, int inf, int sup){
    int m;
    if(sup-inf<0) return -1;
    m = inf+(sup-inf)/2;

    if(vet[m]>e)
        return ricerca(vet, e, inf, m-1);
    if(vet[m]<e){
        return ricerca(vet, e, m+1, sup);
    }
    return m;
}