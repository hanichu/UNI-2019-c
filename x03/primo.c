#include <stdio.h>
int main(){
    int n, p = 1, i;
    printf("Inserisci numero: ");
    scanf("%d", &n);

    for(i=2; i<n&&p!=0; i++){
        if(n%i==0) p=0;
    }
    if(p==1){
        printf("%d è primo\n", n);
    }
    else{
        printf("%d non è primo\n", n);
    }
    return 0;
}