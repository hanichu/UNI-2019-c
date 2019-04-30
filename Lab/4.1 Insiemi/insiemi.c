#include "insiemi.h"

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
    if(!insieme_contiene(A, x) && A[0]<MAX_ELEMENTI){
        A[0]++;
        A[A[0]]=x;
        return 1;
    }
    return 0;
}

/*
Elimina l'elemento x dall'insieme A
restituisce 1 in caso di successo,
restituisce 0 se x è assente
*/

int elimina_elemento_insieme(insieme A, int x){
    int i=1;
    if(!insieme_contiene(A, x)){
        return 0;
    }
    for(i=1; A[i]!=x; i++);

    for(i=i; i<A[0]; i++){
        A[i]=A[i+1];
    }
    A[0]--;
    return 1;
}

/*
Inserisce nell'insieme risultato gli elementi comuni ad A e B
*/

void intersezione_insiemi(insieme A, insieme B, insieme risultato){
    int i;
    for(i=1; i<=A[0]; i++){
        if(insieme_contiene(B, A[i])){
            inserisci_elemento_insieme(risultato, A[i]);
        }
    }
}

/*
inserisce (una sola volta) nell'insieme risultato gli elementi
contenuti in A e B (o entrambi, non esclusivo)
*/

void unione_insiemi(insieme A, insieme B, insieme risultato){
    int i;
    for(i=1; i<=B[0] || i<=A[0]; i++){
        if(i<=A[0])
            inserisci_elemento_insieme(risultato, A[i]);
        if(i<=B[0])
            inserisci_elemento_insieme(risultato, B[i]);
    }
}

/*
Inserisce nell'insieme risultato gli elementi contenuti in A
e assenti in B
*/

void differenza_insiemi(insieme A, insieme B, insieme risultato){
    int i;
    for(i=1; i<=A[0]; i++){
        if(!insieme_contiene(B, A[i]))
            inserisci_elemento_insieme(risultato, A[i]);
    }
}


void ordina_insieme(insieme A){
    int i, x, c, ordinato=0;

    while(!ordinato){
        for(i=1, c=0; i<A[0]; i++){
            if(A[i]>A[i+1]){
                x = A[i];
                A[i]=A[i+1];
                A[i+1]=x;
                c++;
            }
        }
        if(!c) ordinato = !ordinato;
    }
}


