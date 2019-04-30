#include <stdio.h>


int main(){
    int i, j, rows, cols;
    printf("Input number of rows : ");
    scanf("%d", &rows);
    printf("Input number of cols : ");
    scanf("%d", &cols);
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            if(i<=1||j<=1||i>=rows-2||j>=cols-2)
                printf("* ");
            else
                printf ("  ");
        }
        printf("\n");
    }
    return 0;
}