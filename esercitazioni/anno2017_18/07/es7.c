#include <stdlib.h>
#include <stdio.h>
#include "es7.h"

/*
Esercizio 1:

Scrivere la funzione ricorsiva fattoriale_ric che,
data in input un intero positivo n, calcola il valore di n!
Scrivere la funzione stampa_fattoriale_ric che,
legge da terminale tre numeri interi positivi e stampa il
fattoriale dei tre numeri. La funzione stampa_fattoriale_ric
deve utilizzare la funzione fattoriale_ric.

Esempi di test:

Seleziona l'esercizio da eseguire:
        1       : Es 1 (Stampa fattoriale ricorsiva)
        2       : Es 2 (Stampa f)
        3       : Es 3 (Fattoriale iterativa)
        altro   : Esci

1
Inserisci 3 numeri separati da spazio
1 2 3
Fattoriale(1) = 1
Fattoriale(2) = 2
Fattoriale(3) = 6
*/

int fattoriale_ric(int n){
    if(n==1) return 1;
    else return n*fattoriale_ric(n-1);
}

void stampa_fattoriale_ric(){
    int a, b, c;
    printf("Inserisci 3 numeri separati da spazio\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Fattoriale(%d) = %d\n", a, fattoriale_ric(a));
    printf("Fattoriale(%d) = %d\n", b, fattoriale_ric(b));
    printf("Fattoriale(%d) = %d\n", c, fattoriale_ric(c));
}

/*
Convertire il seguente codice F# in equivalente codice C:

let id x = x
let rec f (x : int) (y : char) : int =
    if (x > 0) then
        f (id (x - 1)) (id y) + id x
    else
        0
Scrivere una funzione stampa_f che acquisisce un intero x e un carattere y
e stampa sul terminale il risultato della applicazione della funzione f
ai valori x e y.

Esempi di test:

Seleziona l'esercizio da eseguire:
        1       : Es 1 (Stampa fattoriale ricorsiva)
        2       : Es 2 (Stampa f)
        3       : Es 3 (Fattoriale iterativa)
        altro   : Esci

2
Inserisci x e y separati da spazio
4 a
f(4, a) = 10

Seleziona l'esercizio da eseguire:
        1       : Es 1 (Stampa fattoriale ricorsiva)
        2       : Es 2 (Stampa f)
        3       : Es 3 (Fattoriale iterativa)
        altro   : Esci

2
Inserisci x e y separati da spazio
18 c
f(18, c) = 171
*/

int id_int(int x){
    return x;
}

char id_char(char y){
    return y;
}

int f(int x, char y){
    if (x > 0) {
        return f(id_int(x-1), id_char(y)) + id_int(x);
    }
    else{
        return 0;
    }

}

void stampa_f(){
    int x;
    char y;
    printf("Inserisci x e y separati da spazio\n");
    scanf("%d %c", &x, &y);
    printf("f(%d, %c) = %d\n", x, y, f(x, y));
}

/*
Esercizio 3:

Scrivere la funzione iterativa stampa_fattoriale_ite che legge un numero
intero positivo da terminale e stampa il fattoriale del numero inserito.
La funzione non deve utilizzare la funzione fattoriale_ric precedentemente implementata.

Esempi di test:

Seleziona l'esercizio da eseguire:
        1       : Es 1 (Stampa fattoriale ricorsiva)
        2       : Es 2 (Stampa f)
        3       : Es 3 (Fattoriale iterativa)
        altro   : Esci

3
Inserisci un numero
8
Fattoriale(8) = 40320

*/

void stampa_fattoriale_ite(){
    int n, res, clone;
    printf("Inserisci un numero\n");
    scanf("%d", &n);
    clone=n;
    res=n;
    while(n>1){
        res *= n-1;
        n--;
    }
    printf("Fattoriale(%d) = %d\n", clone, res);

}