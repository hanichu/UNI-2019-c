#include <stdio.h>
#include <math.h>

void radice_quadrata(double x, double epsilon) {
    double a=1, b=x;
    int i=0;

    while(b-a>=epsilon){
        if(((b+a)/2.0)*((b+a)/2.0)>=x){
            b=(b+a)/2.0;
            i++;
            printf("\n%.13f è l'intervallo numero %d\n", b, i);
        }
        else{
            a=(b+a)/2.0;
            i++;
            printf("\n%.13f è l'intervallo numero %d\n", a, i);
        }
    }
    printf("\nRisultato finale %.13f\n\nb - a = %.13f\n\n",(b+a)/2.0, b-a);
}

int isPrime(int n){
    int i=2, prime=1;

    while(i<n){
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

int main(){
    int x;
    printf("\nInserisci il numero: ");
    scanf("%d", &x);
    printf("%d\n\n", goldbach(x));
    return 0;
    /*
    double x, epsilon;
    printf("\nInserire x: ");
    scanf("%lf", &x);
    printf("\nInserire epsilon: ");
    scanf("%lf", &epsilon);
    radice_quadrata(x, epsilon);
    return 0;
    */

}