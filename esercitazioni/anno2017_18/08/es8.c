#include <stdlib.h>
#include <stdio.h>
#include "es8.h"

/*
Esercizio 1:

Scrivere la funzione che legge da terminale una sequenza di numeri
terminata da due numeri consecutivi uguali.

Esempi di test:

Seleziona l'esercizio da eseguire:
        1       : Es 1 (Leggi sequenza semplice)
        2       : Es 2 (Leggi sequenza e calcola media)
        3       : Es 3 (Goldbach)
        altro   : Esci

1
Inserisci un numero:
8
Inserisci un numero:
2
Inserisci un numero:
18
Inserisci un numero:
18
Sequenza terminata
*/

void leggi_sequenza(){
    int a, b;
    do{
        b=a;
        printf("Inserisci un numero:\n");
        scanf("%d", &a);
    }while(a!=b);
    printf("Sequenza terminata\n");

}

/*
Esercizio 2:

Scrivere una funzione che legge da terminale una sequenza di lunghezza sconosciuta
di numeri interi positivi. Il programma, a partire dal primo numero introdotto,
stampa dopo ogni numero inserito la media di tutti i numeri letti fino a quel momento.
Terminare quando il numero letto è negativo.

Esempi di test:

Seleziona l'esercizio da eseguire:
        1       : Es 1 (Leggi sequenza semplice)
        2       : Es 2 (Leggi sequenza e calcola media)
        3       : Es 3 (Goldbach)
        altro   : Esci
2
Inserisci un numero:
8
La media attuale è: 8.000
Inserisci un numero:
4
La media attuale è: 6.000
Inserisci un numero:
3
La media attuale è: 5.000
Inserisci un numero:
3
La media attuale è: 4.500
Inserisci un numero:
0
La media attuale è: 3.600
Inserisci un numero:
-4
Le media finale è: 3.600
Seleziona l'esercizio da eseguire:
        1       : Es 1 (Leggi sequenza semplice)
        2       : Es 2 (Leggi sequenza e calcola media)
        3       : Es 3 (Goldbach)
        altro   : Esci
2
Inserisci un numero:
-8
Le media finale è: 0.000
*/

void media_sequenza(){
    int n, tot=0, i=0;
    float avg;

    printf("Inserisci un numero:\n");
    scanf("%d", &n);
    while(n>=0){
        i++;
        tot += n;
        avg = (float)tot/i;
        printf("La media attuale è: %.3f\n", avg);
        printf("Inserisci un numero:\n");
        scanf("%d", &n);
    }
    printf("La media finale è: %.3f\n", avg);

}

/*
Esercizio 3:

In matematica, la congettura di Goldbach è uno dei più vecchi problemi
irrisolti nella teoria dei numeri. Essa afferma che ogni numero pari
maggiore di 2 può essere scritto come somma di due numeri primi
(che possono essere anche uguali).

Scrivere la funzione goldbach che legge da terminale un numero intero n
e stampa la coppia di numeri primi la cui somma è pari a n.

Il risultato deve rispettare il seguente formato:

Golbach(x) = a + b
Dove a <= b.

Esempi di test:

Seleziona l'esercizio da eseguire:
        1       : Es 1 (Leggi sequenza semplice)
        2       : Es 2 (Leggi sequenza e calcola media)
        3       : Es 3 (Goldbach)
        altro   : Esci

3
Inserisci un numero pari maggiore di 2:
8
Golbach(8) = 3 + 5
Seleziona l'esercizio da eseguire:
        1       : Es 1 (Leggi sequenza semplice)
        2       : Es 2 (Leggi sequenza e calcola media)
        3       : Es 3 (Goldbach)
        altro   : Esci

3
Inserisci un numero pari maggiore di 2:
7
Il numero inserito è dispari
Seleziona l'esercizio da eseguire:
        1       : Es 1 (Leggi sequenza semplice)
        2       : Es 2 (Leggi sequenza e calcola media)
        3       : Es 3 (Goldbach)
        altro   : Esci

3
Inserisci un numero pari maggiore di 2:
2
Il numero deve essere maggiore di 2
*/

int isPrimo(int n){
    int p = 1, i;
    for(i=2; i<n&&p!=0; i++){
        if(n%i==0) p=0;
    }
    return p;
}

void goldbach(){
    int n, i=2, end=0;
    printf("Inserisci un numero pari maggiore di 2:\n");
    scanf("%d", &n);
    if (n<=2){
        printf("Il numero deve essere maggiore di 2\n");
    }
    else if(n%2!=0){
        printf("Il numero inserito è dispari\n");
    }
    else{
        while(i<n&&end==0){
            i++;
            if(isPrimo(i)==1&&isPrimo(n-i)==1){
                end=1;
            }
        }
        printf("Goldbach(%d) = %d + %d\n", n, i, n-i);
    }
}
