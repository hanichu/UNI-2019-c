#include <string.h>
#include "es3A.h"


int count_ch(char *s){
    if(!*s) return 0;
    if(*s==' ') return count_ch(s+1);
    else return 1+count_ch(s+1);
}


int aux_pali(char *s, int c, int half, int i, int j){
    if(c>=half) return 1;
    if(*(s+i)==' ') return aux_pali(s, c, half, i+1, j);
    if(*(s+j)==' ') return aux_pali(s, c, half, i, j-1);
    if(*(s+i)==*(s+j)){
        c++;
        return aux_pali(s, c, half, i+1, j-1);
    }else return 0;
}


int palindroma_ns(char *s){
    int half=count_ch(s)/2;
    return aux_pali(s, 0, half, 0, strlen(s)-1);
}
