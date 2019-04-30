#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


/*
Domanda 1:

Date le seguenti dichiarazioni:

int a; long b;

qual è il tipo dell'espressione a + b + 12.3?
*/

void es1(){

 int a;
 long b;
 printf("Inserisci un int:\t");
 scanf("%d", &a);

 printf("Inserisci un long:\t");
 scanf("%ld", &b);

 printf("\n\t%d + %ld + 12.3 = %f\n", a, b, a+b+12.3f);

}

/*
Domanda 2
*/

void es2(){
    int a, b, sum=0;

    for (a = 0; a < 10; a++){
        for (b = 0; b < 10; b++){
            if (a==b) sum = sum + 1;
        }
    }
    printf("\n\tRisultato: %d\n\n", sum);
}

/*
Domanda 3
*/

void es3(){
    int a, b, sum;

    for (a=0; a<10; a++)
        for (b=0; b<10; b++)
            if (a <= b)
                sum = sum +1;

    printf("\n\tRisultato: %d\n\n", sum);
}


/*
Domanda 8
*/

void es8(){
    int i, j, sum = 0;

    for (i=0; i<10; i++){
        for (j=i; j<5; j++){
            sum = sum + 1;
        }
    }

    printf("\n\tRisultato: %d\n\n", sum);
}

/*
Domanda 9
*/

void es9(){
    int i, j, sum;
    for (i=0; i<3; i++) {
        sum = 0;
        for (j=0; j<i; j++){
            sum = sum + 1;
        }
    }
    printf("\n\tRisultato: %d\n\n", sum);
}

/*
Domanda 11
*/

void es11(){
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%d", a>b);
}

/*

Domanda 12

a. b = a;
b. a = b;
c. b = c;
d. c = b;

*/

void es12(){
    char a = 'z';
    int b = 3;
    float c =12.3;
    printf("\n\ta=%d b=%d c=%f\n\n", a, b, c);

    b=a;
    printf("\n\tb=a\n\ta=%d b=%d c=%f\n\n", a, b, c);

    a = 'z';
    b = 3;
    c =12.3;
    b=c;
    printf("\n\tb=c\n\ta=%d b=%d c=%f\n\n", a, b, c);

    a = 'z';
    b = 3;
    c =12.3;
    c=b;
    printf("\n\tc=b\n\ta=%d b=%d c=%f\n\n", a, b, c);

    a= 'z';
    b = 3;
    c =12.3;
    a=b;
    printf("\n\ta=b\n\ta=%d b=%d c=%f\n\n", a, b, c);
}

/*
Domanda 14
*/

void es14(){
    if(0){
        printf("è vera");
    }
    else
        printf("e falsa");


}

int main(void){
    int es;
    do{
        printf("\n\tSeleziona un esercizio:\n\t1\t(Domanda 1)\n\t2\t(Domanda 2)\n\t3\t(Domanda 3)\n\t4\t(Domanda 8)\n\t5\t(Domanda 9)");
        printf("\n\t6\t(Domanda 11)\n\t7\t(Domanda 12)\n\t8\t(Domanda 14)");
        printf("\n\tAltro:\tEsci\n\n");
        scanf("%d", &es);
        if(es==1){
            es1();
        }
        else if(es==2){
            es2();
        }
        else if(es==3){
            es3();
        }
        else if(es==4){
            es8();
        }
        else if(es==5){
            es9();
        }
        else if(es==6){
            es11();
        }
        else if(es==7){
            es12();
        }
        else if(es==8){
            es14();
        }
    }while(es>=1&&es<=8);
    return 0;
}
