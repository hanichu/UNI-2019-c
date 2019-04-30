#include "es3D.h"

int count_lung(int A[], int i, int k, int *lung){
    if(*(A+i)>=*(A+i+1)&&i<*lung-1){
        return count_lung(A, i+1, k+1, lung);
    }else return k;
}


int aux(int A[], int *lung, int i, int index, int max){
    int l;
    if(i>=*lung-1){
        *lung=max;
        return index;
    }
    l=count_lung(A, i, 1, lung);
    if(max<l){
        max=l;
        index=i;
    }
    return aux(A, lung, i+l, index, max);
}


int sequenza_decrescente_massima (int A[], int *lung){
    int i=0, index=0, max=1;
    index = aux(A, lung, i, index, max);
    return index;
}

