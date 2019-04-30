#include <stdio.h>
/*
Libro cap 1.3
La lunghezza in chilometri di una maratona
*/

int main(void){
    int miles, yards;
    float km;

    printf("Input miles: ");
    scanf("%d", &miles);
    printf("Input yards: ");
    scanf("%d", &yards);

    km = 1.609 * (miles + yards / 1760.0);
    printf("\nA marathon is %f km. \n\n", km);
    return 0;
}

