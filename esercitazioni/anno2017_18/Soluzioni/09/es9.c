#include "es9.h"

/* Funzione di appoggio usata nell'implementazione delle successive funzioni. Restituisce 1
 * se tutti gli elementi del vettore `occ` sono uguali a 1, 0 altrimenti. */
int tutti_uno(int occ[DIM]) {
    int i;

    for (i = 0; i < DIM; i++) {
        if (occ[i] != 1) {
            return 0;
        }
    }
    return 1;
}

int verifica_riga(int campo[][DIM], int riga) {
    int c;
    /* Da specifica del linguaggio, quando viene dichiarato un vettore di dimensione DIM
     * e l'espressione di inizializzazione contiene meno di DIM elementi, le rimanenti
     * posizioni del vettore sono inizializzate a 0. In pratica stiamo dichiarando un
     * vettore di dimensione DIM dove tutte le posizioni sono inizializzate a 0.
     * NB: quando dichiarate una variabile in C, questa non viene inizializzata con un
     * valore di default. Pertanto è importante inizializzare tutte le variabili che
     * utilizzate! */
    int occ[DIM] = {0};

    /* Controllo la validità dell'indice di riga */
    if (riga < 0 || riga >= DIM) {
        return 0;
    }
    /* Conta le occorrenze dei numeri tra 1 e DIM (9). Il controllo all'interno del
     * ciclo serve per evitare di scrivere in posizioni non valide del vettore. */
    for (c = 0; c < DIM; c++) {
        if (campo[riga][c] >= 1 && campo[riga][c] <= DIM) {
            occ[campo[riga][c]-1]++;
        }
    }
    /* Controlla che tutti i numeri occorrano una volta. In caso contrario, la
     * funzione restituisce 0. */
    return tutti_uno(occ);
}

/* Funzione analoga a `verifica_riga` che fa il medesimo controllo sulle colonne. */
int verifica_colonna(int campo[][DIM], int colonna) {
    int r, occ[DIM] = {0};

    if (colonna < 0 || colonna >= DIM) {
        return 0;
    }
    for (r = 0; r < DIM; r++) {
        if (campo[r][colonna] >= 1 && campo[r][colonna] <= DIM) {
            occ[campo[r][colonna]-1]++;
        }
    }
    return tutti_uno(occ);
}

/* Anche questa funzione è concettualmente molto simile alle precedenti. */
int verifica_riquadro(int campo[][DIM], int riga, int colonna) {
    int r, c, occ[DIM] = {0};

    if (riga < 0 || riga > DIM-3 || colonna < 0 || colonna > DIM-3) {
        return 0;
    }
    for (r = riga; r < riga+3; r++) {
        for (c = colonna; c < colonna+3; c++) {
            if (campo[r][c] >= 1 && campo[r][c] <= DIM) {
                occ[campo[r][c]-1]++;
            }
        }
    }
    return tutti_uno(occ);
}

/* La funzione `verifica_campo` utilizza le tre funzioni di verifica definite sopra per
 * controllare se la matrice contiene una soluzione valida secondo le regole di Sudoku. */
int verifica_campo(int campo[][DIM]) {
    int r, c;

    /* Verifica che ogni riga contenga tutti i numeri da 1 a 9. */
    for (r = 0; r < DIM; r++) {
        if (!verifica_riga(campo, r)) {
            return 0;
        }
    }
    /* Verifica che ogni colonna contenga tutti i numeri da 1 a 9. */
    for (c = 0; c < DIM; c++) {
        if (!verifica_colonna(campo, c)) {
            return 0;
        }
    }
    /* Verifica che ogni riquadro contenga tutti i numeri da 1 a 9. */
    for (r = 0; r < DIM; r += 3) {
        for (c = 0; c < DIM; c += 3) {
            if (!verifica_riquadro(campo, r, c)) {
                return 0;
            }
        }
    }
    /* Se l'esecuzione arriva a questo punto, tutti i requisiti sono soddisfatti,
     * pertanto il campo contiene una soluzione valida di un Sudoku. */
    return 1;
}
