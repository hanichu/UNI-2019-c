#include <stdio.h>
int main(){
    int i, j, rows;
    printf("Input number of rows : ");
    scanf("%d", &rows);
    for(i=0; i<rows; i++){
        for(j=0; j<rows; j++){
            if(i==0||j==0||i==rows-1||j==rows-1||j==i||i+j==rows-1)
                printf("* ");
            else 
                printf ("  ");
        }
        printf("\n");
    }
    return 0;
}