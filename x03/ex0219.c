#include <stdio.h>
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
#define PI (3.14159265358979323846)


/*
1) Hello
Scrivere n linee contenenti il numero della linea ed il testo Hello
*/

int hello(){
    int i, n;
    printf("Inserisci il numero di volte in cui visualizzare 'Hello': ");
    scanf("%d", &n);
    for (i=1; i<n; i++) {
        printf("%d: Hello!\n", i);
    }
    printf("%d: Hello!\n\n", n);
    return 0;
}

/*
2) Somma dei primi n numeri naturali
Calcolare la somma dei numeri naturali minori o uguali ad un numero n inserito dall'utente
*/

int somma(){
    int somma = 0;
    int i, n = 0;
    printf("Inserisci un numero: ");
    scanf("%d",&n);
    for ( i=1 ; i<n ; i++ ) {
        printf("%d + ", i);
        somma += i;
    }
    printf("%d = %d\n\n", n, somma+n);
    return 0;
}

/*
3) Interi e double
Confrontare i valori assegnati alle variabili nei seguenti casi e
spiegare l'origine delle differenze.
ATTENZIONE: QUESTO VI DOVREBBE AIUTARE AD EVITARE UN TIPO DI ERRORE
FREQUENTE NELL'ESERCIZIO SEGUENTE
*/

int intdouble(){
    int n;
    double a, b, c;
    printf("Inserisci un numero intero n abbastanza grande: ");
    scanf("%d", &n);
    a = 1/(n*n);
    b = 1.0/(n*n);
    c = 1.0/((double)n*n);
    printf("Numero inserito\t\t= %d\na) 1/n*n\t\t= %.16f\nb) 1.0/(n*n)\t\t= %.16f\nc) 1.0/((double)n*n)\t= %.16f\n\n",n,a,b,c);
    return 0;
}

/*
4) Somma degli inversi dei quadrati dei primi n numeri naturali
Calcolare la somma degli inversi dei quadrati dei numeri naturali minori o
uguali ad un numero n inserito dall'utente.
*/

double sommaInversi(){
    int i, n;
    double s=0;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        s+=1.0/((double)i*i);
    }
    printf("Il risultato è: %.20f\n", s);
    return 0;
}

double pigreco(){
    double res;
    res = (PI*PI)/6.0;
    printf("La controprova è: %.20f\n\n", res);
    return 0;
}

/*
5) Somma degli inversi dei quadrati dei primi n numeri naturali dispari
Calcolare la somma degli inversi dei quadrati dei primi n numeri naturali dispari,
con n numero intero inserito dall'utente.
*/

double inversiDispari(){
    int n, i;
    double s=0, x;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if (i%2!=0){
            x=1.0/((double)i*i);
            s+=x;
        }
    }
    printf("Il risultato è = %.20f\n\n", s);
    return 0;
}

/*
6) Somma degli inversi dei quadrati dei primi n numeri naturali che
siano il cubo di un numero naturale
Calcolare la somma degli inversi dei quadrati dei primi n numeri
naturali che siano il cubo di un numero naturale, con n numero intero
inserito dall'utente.
*/
double inversiQuadrati(){
    int n, i;
    double s=0, x;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        x=1.0/((double)i*i)*((double)i*i);
        s+=x;

    }
    printf("Il risultato è = %.20f\n\n", s);
    return 0;
}

/*
Manca l'esercizio 7 ma non ho voglia di farlo
*/


/*
Main con tutte le varie scelte
*/
int main(void){
    int es;

    do {
    	printf("Seleziona l'esercizio da eseguire:\n\t1 \t: Es 1 (Hello)\n\t2 \t: Es 2 (Somma dei primi numeri)\n\t3 \t: Es 3 (Interi e double)\n\t4 \t: Es 4 (Somma degli inversi)\n\t5 \t: Es 5 (Somma degli inversi dispari)\n\t6 \t: Es 6 (Somma degli inversi dei quadrati)\n\taltro \t: Esci\n\n");
		scanf("%d", &es);
		if(es==1){
		    hello();
		}
		else if(es==2){
            somma();
		}
		else if(es==3){
		    intdouble();
		}
		else if(es==4){
            sommaInversi();
            pigreco();
		}
		else if(es==5){
		    inversiDispari();
		}
		else if(es==6){
		    inversiQuadrati();
		}
	} while (es>=1 && es<=7);
    return 0;
}