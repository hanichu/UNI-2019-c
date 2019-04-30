#include "es1C.h"

int isPrime(int n){
    int i=2, prime=1;

    while(i<n&&prime){
        if(n%i==0){
            prime = 0;
        }
        i++;
    }
    return prime;

}


int goldbach(int n) {
    int i=2, res = 0;

    if(n>2&&n%2==0){
        while(i<n&&res==0){
            if(isPrime(i)&&isPrime(n-i)){
                res = i;
            }
            i++;
        }
    }
    return res;

}