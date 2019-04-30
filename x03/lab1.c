#include <stdio.h>
#include <math.h>

void cubo(){
    int i = 0, trovati = 0;
    double radice_cubica;

    while(trovati < 5 && i<70){
        radice_cubica = pow(i, 1.0/3.0);
        printf("\n\ti = %d\n\tradice cubica = %.16f\n", i, radice_cubica);
        if(radice_cubica == floor(radice_cubica)){
            trovati++;
            printf("\n(IF = True)\t=> %d\t=> i = %d\n\tradice cubica = %f\n\n", trovati, i, radice_cubica);
        }
        i++;
    }
}

int main(void){
    cubo();
    return 0;
}