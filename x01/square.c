#include <stdio.h>
int main(){
    int i, j, rows, cols;
    printf("Input number of rows : ");
    scanf("%d", &rows);
    printf("Input number of cols : ");
    scanf("%d", &cols);    
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            if(i==0||j==0||i==rows-1||j==cols-1)
                printf("* ");
            else 
                printf ("  ");
        }
        printf("\n");
    }
    return 0;
}