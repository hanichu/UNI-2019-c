#include <stdio.h>
/*Calcolo del minimo comun multiplo*/

int main(){

    /*facciomo che finchè (a*i)%b!=0 allora il ciclo continua
    ma ho la sensazione che il prof abbia fatto un algoritmo più easy*/
    int a, b;
    int i = 1;

    printf("Inserisci il primo numero: ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    while((a*i)%b!=0){
        i++;
    }

    printf("Il minimo comun mulptiplo è %d \n", a*i);
}