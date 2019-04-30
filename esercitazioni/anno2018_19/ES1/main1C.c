#include <stdio.h>
#include "es1C.h"

/*

Compilare con:
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o es1A es1C.c main1C.c -lm

Eseguire con:
./es1C

IMPORTANTE:
NON CONSEGNARE I FILE CONTENENTI main E GLI HEADER

*/

int goldright(int x){
    int i;
    for(i=2;i<=x&&isPrime(x);i++){
        if(i==){

        }
        else if(i==4){
            return 2;
        }
        else return 3;
    }
    return 0;
}


int error(int x){
    int res = goldbach(x);
    int giust = goldright(x);
}

int main(int x) {
    int i;
    for(i=0; i<=x; i++){

    }
}
