#include <stdio.h>
/*numeri pari*/
int n, p;
int main(){
    printf("scegli il n° di elementi da visualizzare: ");
    scanf("%d", &n);
    p=0;
    while (p<n){
        printf("%d \n", 2*p);
        p++;
    }
    return 0;
}