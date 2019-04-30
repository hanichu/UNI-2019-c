#include <stdio.h>
/*Algoritmo (di Euclide) per trovare il massimo comune divisore*/
int a, b;
int main(){
    printf("Primo numero: ");
    scanf("%d", &a);
    printf("Secondo numero: ");
    scanf("%d", &b);
    while (a!=b) {
        if (a>b) a = a-b;
        else b = b-a;
    }
    printf("MCD = %d \n", a);
}