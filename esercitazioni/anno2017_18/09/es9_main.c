#include <stdlib.h>
#include <stdio.h>
#include "es9.h"

/* Campo corretto */
int campo1[DIM][DIM] = {
    { 8, 2, 1, 5, 4, 6, 3, 7, 9 },
    { 9, 6, 4, 8, 3, 7, 5, 2, 1 },
    { 5, 3, 7, 2, 1, 9, 6, 8, 4 },
    { 7, 1, 6, 4, 8, 2, 9, 5, 3 },
    { 3, 4, 9, 7, 5, 1, 8, 6, 2 },
    { 2, 8, 5, 6, 9, 3, 4, 1, 7 },
    { 1, 5, 8, 9, 7, 4, 2, 3, 6 },
    { 4, 7, 2, 3, 6, 5, 1, 9, 8 },
    { 6, 9, 3, 1, 2, 8, 7, 4, 5 }
};

/* Campo corretto */
int campo2[DIM][DIM] = {
    { 4, 8, 7, 9, 5, 2, 1, 3, 6 },
    { 2, 9, 3, 6, 1, 4, 7, 5, 8 },
    { 1, 6, 5, 7, 8, 3, 4, 9, 2 },
    { 8, 2, 1, 3, 7, 5, 6, 4, 9 },
    { 5, 7, 6, 8, 4, 9, 3, 2, 1 },
    { 3, 4, 9, 1, 2, 6, 5, 8, 7 },
    { 9, 1, 8, 5, 3, 7, 2, 6, 4 },
    { 6, 5, 4, 2, 9, 1, 8, 7, 3 },
    { 7, 3, 2, 4, 6, 8, 9, 1, 5 }
};

/* Campo errato */
int campo3[DIM][DIM] = {
    { 2, 7, 3, 4, 8, 1, 9, 6, 5 },
    { 5, 1, 4, 9, 3, 6, 8, 2, 7 },
    { 6, 9, 3, 2, 7, 5, 1, 4, 3 },
    { 8, 3, 1, 6, 5, 7, 2, 9, 4 },
    { 7, 6, 9, 1, 4, 3, 5, 8, 1 },
    { 4, 5, 1, 8, 1, 6, 7, 3, 6 },
    { 9, 4, 5, 7, 2, 3, 6, 1, 8 },
    { 3, 3, 8, 1, 6, 8, 4, 5, 9 },
    { 1, 8, 6, 6, 9, 4, 3, 7, 2 }
};

/* Campo errato */
int campo4[DIM][DIM] = {
    { 2, 7, 3, 0, 8, 1, 9, 6, 5 },
    { 5, 1, 4, 9, 3, 6, 8, 2, 7 },
    { 6, 9, 3, 2, 7, 5, 1, 4, 3 },
    { 8, 3, 1, 6, 5, 7, 2, 9, 4 },
    { 7, 6, 9, 1, 4, 3, 5, 8, 1 },
    { 4, 5, 1, 8, 1, 6, 7, 3, 6 },
    { 9, 4, 5, 7, 2, 3, 6, 1, 8 },
    { 3, 0, 8, 1, 6, 8, 4, 0, 9 },
    { 1, 8, 6, 6, 9, 4, 3, 7, 2 }
};

/*Campo mio*/
int campo_mio[DIM][DIM] = {
    { 8, 2, 1, 5, 4, 6, 10, 7, 9 },
    { 9, 6, 4, 8, -3, 7, 5, 2, 1 },
    { 5, 3, 7, 2, 1, 9, 6, 8, 4 },
    { 7, 1, 6, 4, 8, 2, 9, 5, 3 },
    { 3, 4, 9, 7, 5, 1, 8, 6, 2 },
    { 2, 8, 5, 6, 9, 3, 4, 1, 7 },
    { 1, 5, 8, 9, 7, 4, 2, 3, 6 },
    { 4, 7, 2, 3, 6, 5, 1, 9, 8 },
    { 6, 9, 3, 1, 2, 8, 7, 4, 5 }
};


/*
 * Compilare con il comando
 gcc -std=gnu89 -Wall -pedantic -o es9 es9.c es9_main.c && ./es9

 */
int main() {

    printf("\n\tEsercizi righe\n\n");

    /* restituisce 1 */
    printf("\nEsercizio 1.1 (corretto): %d\n", verifica_riga(campo1, 3));
    /* restituisce 0 poiché l'indice di riga è invalido */
    printf("\nEsercizio 1.2 (indice troppo grande): %d\n", verifica_riga(campo1, 9));
    /* restituisce 0 dal momento che i numeri 1 e 6 sono presenti due volte e mancano i numeri 2 e 9 */
    printf("\nEsercizio 1.3 (numeri ripetuti): %d\n\n", verifica_riga(campo3, 5));

    printf("\nCampo mio con 10: %d\n", verifica_riga(campo_mio, 0));
    printf("\nCampo mio con -3: %d\n", verifica_riga(campo_mio, 1));
    printf("\nCampo mio con indice troppo piccolo: %d\n", verifica_riga(campo_mio, -2));

    printf("\n\n\tEsercizi colonne\n\n");
    /* restituisce 1 */
    printf("\nEsercizio 2.1 (Corretto): %d\n", verifica_colonna(campo1, 0));
    /* restituisce 0 poiché l'indice della colonna è invalido */
    printf("\nEsercizio 2.2 (indice troppo piccolo): %d\n", verifica_colonna(campo1, -2));
    /* restituisce 0 dal momento che il numero 3 è duplicato e manca il 2 */
    printf("\nEsercizio 2.3 (numero ripetuto): %d\n\n", verifica_colonna(campo3, 1));


    printf("\n\n\tEsercizi campi 3x3\n\n");
    /* restituisce 1 */
    printf("Esercizio 3.1 (corretto): %d\n", verifica_riquadro(campo1, 0, 0));
    /* restituisce 0 poiché l'indice della riga è invalido */
    printf("Esercizio 3.2 (indice riga invalida): %d\n", verifica_riquadro(campo1, 8, 2));
    /* restituisce 0 dal momento che il numero 4 è presente due volte e manca il 5 */
    printf("Esercizio 3.3 (num 4 x2 & 5 x0): %d\n", verifica_riquadro(campo1, 1, 1));
    /* restituisce 0 dal momento che il 3 è duplicato e manca il numero 8 */
    printf("Esercizio 3.4 (num 3 x2 & 8 x0): %d\n\n", verifica_riquadro(campo3, 0, 0));

    return EXIT_SUCCESS;




}
