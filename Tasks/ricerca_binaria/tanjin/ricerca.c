#include "ricerca.h"
#include <stdio.h>

int ricerca_binaria_iterativo(int a[],int dim,int elem){
    int first = 0,middle=(first+dim)/2,index = -1;
    dim--;
    while (first <= dim && a[middle]!=elem){

        middle = (first+last)/2;

        if(a[middle] == elem){
            index = middle;
        }

        if(a[middle]< elem ){
            printf("FIRST = %d   MIDDLE = %d   LAST = %d\n",a[first],a[middle],a[dim]);
            first = (middle + 1) ;
        }else{
            printf("FIRST = %d   MIDDLE = %d   LAST = %d\n",a[first],a[middle],a[dim]);
            dim = (middle - 1);
        }
    }

    return index;
}