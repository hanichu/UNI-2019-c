#include "ordinati.h"

/*
Inizializza l'insieme A impostando il numero di elementi a 0
*/

void inizializza_insieme(insieme A){
    A[0] = 0;
}

/*
Restituisce 1 se l'insieme A contiene x,
restituisce 0 altrimenti
*/

int insieme_contiene(insieme A, int x){
    int i, res=0;
    for(i=1; i<=A[0] && !res; i++){
        if(A[i]==x){
            res = !res;
        }
    }
    return res;
}


/*
Inserisce l'elemento x nell'insieme A
restituisce 1 in caso di successo,
restituisce 0 se non c'è spazio per nuovi elementi
*/

int inserisci_elemento_insieme(insieme A, int x){
    int i=1, res=0, k;

    if(insieme_contiene(A, x)){
        return res;
    }
    if(A[0]==0){
        A[1]=x;
        A[0]++;
        return !res;
    }
    while(i<=A[0]){
        if(A[i]>x){
            k=A[i];
            A[i]=x;
            x=k;
            i++;
        }else{
            i++;
        }
    }
    A[0]++;
    return !res;
}