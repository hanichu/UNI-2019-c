#include <stdlib.h>
#include <stdio.h>
#include "es8.h"


void leggi_sequenza(){
	int prec, n; 
	printf("Inserisci un numero:\n");
	scanf("%d", &n);
	do{
		prec = n;
		printf("Inserisci un numero:\n");
		scanf("%d", &n);
	}while(prec != n);
	printf("Sequenza terminata\n");
}

void media_sequenza(){
	int n, i, somma;
	float media;

	somma = 0;
	i = 0;
	printf("Inserisci un numero:\n");
	scanf("%d", &n);
	while(n >= 0){
		i++;
		somma = somma + n;
		media = (float)somma / i;
		printf("La media attuale è: %.3f\n", media);
		printf("Inserisci un numero:\n");
		scanf("%d", &n);
	}
	printf("La media finale è: %.3f\n", media);
}

int primo(int n){
	int div = 2;
	int primo = 1;
	while(primo && div<n){
		if(n % div == 0){
			primo = 0;
		}
		div++;
	}
	return primo;
}

void goldbach(){
	int n, tmp, flag;
	printf("Inserisci un numero pari maggiore di 2:\n");
	scanf("%d", &n);
	if(n%2 != 0){
		printf("Il numero inserito è dispari\n");
	}
	else if(n == 2){
		printf("Il numero deve essere maggiore di 2\n");
	}
	else{
		tmp = 2;
		flag = 0;
		while(!flag){
			if(primo(tmp) && primo(n-tmp)){
				flag = 1;
			}
			else{
				tmp++;
			}
		}
		printf("Goldbach(%d) = %d + %d\n", n, tmp, n-tmp);
	}
}
