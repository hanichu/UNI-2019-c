#include <stdlib.h>
#include <stdio.h>
#include "es8.h"

/*
 * Main di esempio. Per compilare, usare il seguente comando:
 *   gcc -std=gnu89 -pedantic -Wall es8.c es8_main.c -o es8
 */
int main(int argc, char *argv[]) {
	int es;

	do {
		printf("Seleziona l'esercizio da eseguire:\n\t1 \t: Es 1 (Leggi sequenza semplice)\n\t2 \t: Es 2 (Leggi sequenza e calcola media)\n\t3 \t: Es 3 (Goldbach)\n\taltro \t: Esci\n\n");
		scanf("%d", &es);
		if(es==1){
			leggi_sequenza();
		}
		else if(es==2){
			media_sequenza();
		}
		else if(es==3){
			goldbach();
		}
	} while (es>=1 && es<=3);
	
	return EXIT_SUCCESS;
}
