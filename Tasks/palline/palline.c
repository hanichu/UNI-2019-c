#include "palline.h"

/*
Palline di colore 'b'(blue), 'r'(rossa) o 'v'(vuoto);
cima con le lettere del colore,
n, il # di palline inseribili
il 'b' mai consecutivo a sè
*/

int palline(int n, char cima){
    if(n<=0) return 1;
    if(cima=='r'||cima=='v'){
        return palline(n-1, 'r')+palline(n-1, 'b');
    }else{
        return palline(n-1, 'r');
    }
}