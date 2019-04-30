#include <stdlib.h>
#include <stdio.h>
#include "es7.h"


int fattoriale_ric(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n * fattoriale_ric(n-1);
    }
}

void stampa_fattoriale_ric(){
    int a, b, c;
    printf ("Inserisci 3 numeri separati da spazio\n");
    scanf ("%d %d %d", &a, &b, &c);
    printf ("Fattoriale(%d) = %d\n", a, fattoriale_ric(a));
    printf ("Fattoriale(%d) = %d\n", b, fattoriale_ric(b));
    printf ("Fattoriale(%d) = %d\n", c, fattoriale_ric(c));
}

char id_char(char x){return x;}
int id_int(int x){return x;}

int f(int x, char y){
    if(x > 0){
        return f(id_int(x - 1), id_char(y)) + id_int (x);
    }
    else{
        return 0;
    }
}

void stampa_f() { 
	int x;
	char y;
	printf("Inserisci x e y separati da spazio\n");
	scanf("%d %c", &x, &y);
    printf ("f(%d, %c) = %d\n", x, y, f(x, y));
}


void stampa_fattoriale_ite(){
    int n, fatt = 1, supp;
    printf ("Inserisci un numero\n");
    scanf ("%d", &n);
    supp = n;
    while(supp > 1){
        fatt = fatt * supp;
        supp = supp -1;
    }
    printf("Fattoriale(%d) = %d\n", n, fatt);
}
