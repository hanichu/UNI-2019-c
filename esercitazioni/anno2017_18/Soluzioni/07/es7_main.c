#include <stdlib.h>
#include <stdio.h>
#include "es7.h"

/*
 * Main di esempio. Per compilare, usare il seguente comando:
 *   gcc -std=gnu89 -pedantic -Wall es7.c es7_main.c -o es7
 */
int main(int argc, char *argv[]) {
	int es;

	do {
		printf("Seleziona l'esercizio da eseguire:\n\t1 \t: Es 1 (Stampa fattoriale ricorsiva)\n\t2 \t: Es 2 (Stampa f)\n\t3 \t: Es 3 (Stampa fattoriale iterativa)\n\taltro \t: Esci\n\n");
		scanf("%d", &es);
		if(es==1){
			stampa_fattoriale_ric();
		}
		else if(es==2){
			stampa_f();
		}
		else if(es==3){
			stampa_fattoriale_ite();
		}
	} while (es>=1 && es<=3);
	
	return EXIT_SUCCESS;
}
