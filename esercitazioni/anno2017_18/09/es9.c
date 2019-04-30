#include <stdio.h>
#include "es9.h"

/*
Esercizio 1
Siano dati un campo da gioco di dimensione 9x9 e l'indice di una riga.
Scrivere la funzione verifica_riga che restituisce 1se nella riga del
campo occorrono (una volta) tutti i numeri da 1 a 9, 0 altrimenti.
Se l'indice di riga non è valido (cioè non è compreso tra 0 e 8),
la funzione deve restituire 0. La firma della funzione è
int verifica_riga(int campo[][DIM], int riga)
dove DIM è una costante (di valore pari a 9) definita nel file es9.h.

Esempi:
•	verifica_riga(campo1, 3) restituisce 1;
•	verifica_riga(campo1, 9) restituisce 0 poiché l'indice di riga è invalido;
•	verifica_riga(campo3, 5) restituisce 0 dal momento che i numeri 1 e 6 sono
presenti due volte e mancano i numeri 2 e 9.
*/

int verifica_riga(int campo[][DIM], int riga) {

    int i, j, check=0;

    if(riga>=DIM||riga<0){
        return check;
    }

    for(i=0; i<DIM&&!check; i++){
        for(j=i+1; j<DIM&&!check;j++){

            /*printf("\n\ti = %d\tj = %d", campo[riga][i], campo[riga][j]);*/
            check = campo[riga][i] == campo[riga][j]||
                    campo[riga][i] > DIM            ||
                    campo[riga][j] > DIM            ||
                    campo[riga][i] <= 0             ||
                    campo[riga][j] <= 0;

            /*printf("\tcheck = %d\n", !check);*/

        }
    }
    return !check;
}

/*
Esercizio 2
Siano dati un campo da gioco di dimensione 9x9 e l'indice di una colonna.
Scrivere la funzione verifica_colonna che restituisce 1 se nella colonna
del campo occorrono (una volta) tutti i numeri da 1 a 9, 0 altrimenti.

Se l'indice di colonna non è valido (ovvero non è compreso tra 0 e 8),
la funzione deve restituire 0. La firma della funzione è la seguente:
int verifica_colonna(int campo[][DIM], int colonna)

Esempi:
•	verifica_colonna(campo1, 0) restituisce 1;
•	verifica_colonna(campo1, -2) restituisce 0 poiché l'indice della colonna è invalido;
•	verifica_colonna(campo3, 1) restituisce 0 dal momento che il numero 3 è duplicato e manca il 2.

*/

int verifica_colonna(int campo[][DIM], int colonna) {
    int i, j, check=0;

    if(colonna>=DIM||colonna<0){
        return check;
    }

    for(i=0; i<DIM&&!check; i++){
        for(j=i+1; j<DIM&&!check;j++){

            /*printf("\n\ti = %d\tj = %d", campo[i][colonna], campo[j][colonna]);*/
            check = campo[i][colonna] == campo[j][colonna]  ||
                    campo[i][colonna] > DIM                 ||
                    campo[j][colonna] > DIM                 ||
                    campo[i][colonna] <= 0                  ||
                    campo[j][colonna] <= 0;

            /*printf("\tcheck = %d\n", !check);*/

        }
    }
    return !check;
}

/*
Esercizio 3
Siano dati un campo da gioco di dimensione 9x9 e una coppia di indici che
identificano la posizione della cella in alto a sinistra di un riquadro di
dimensione 3x3. Scrivere la funzione verifica_riquadro che restituisce 1
se nel riquadro occorrono (una volta) tutti i numeri da 1 a 9, 0 altrimenti.
Se la coppia (riga, colonna) non è una coordinata valida, la funzione deve
restituire 0.
La coordinata non è valida se uno dei due indici non è compreso tra 0 e 6.

La firma della funzione è la seguente:
int verifica_riquadro(int campo[][DIM], int riga, int colonna)

Esempi:
•	verifica_riquadro(campo1, 0, 0) restituisce 1;
•	verifica_riquadro(campo1, 8, 2) restituisce 0 poiché l'indice di riga non è valido;
•	verifica_riquadro(campo1, 1, 1) restituisce 0 dal momento che il numero 4 è
presente due volte e manca il 5;
•	verifica_riquadro(campo3, 0, 0) restituisce 0 dal momento che il 3 è duplicato e
manca il numero 8.

*/

int verifica_riquadro(int campo[][DIM], int riga, int colonna) {
    int check = 0, i, j;

    if(riga>DIM-3||riga<0||colonna>DIM-3||colonna<0){
        return check;
    }

    for(i=riga;i<riga+3&&!check;i++){
        for(j=colonna;j<colonna+3&&!check;j++){
            printf("\n\ti = %d\tj = %d", campo[i][colonna], campo[j][colonna]);
            check = ((campo[i][j] == campo[j][i]) && (j!=i)) ||
                    campo[i][j] > DIM||
                    campo[i][j] <= 0;
            printf("\tcheck = %d\n", !check);
        }
    }

    return !check;
}

/*
Esercizio 4
Sia dato un campo da gioco di dimensione 9x9. Scrivere la funzione verifica_campo
che restituisce 1 se il campo contiene una soluzione valida di un sudoku, 0 altrimenti.

La firma della funzione è la seguente:
int verifica_campo(int campo[][DIM])

Esempi:
•	verifica_campo(campo1) restituisce 1;
•	verifica_campo(campo2) restituisce 1;
•	verifica_campo(campo3) restituisce 0.

*/

int verifica_campo(int campo[][DIM]) {
    return -1;
}
