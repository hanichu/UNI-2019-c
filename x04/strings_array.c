#include <stdio.h>
#include <string.h>

#define DIM1 10
#define DIM2 15



/*
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o stArr strings_array.c -lm && ./stArr


                Stringhe

*/


int isPrefix(char tosearch[], char content[]){
    int i = 0, res = !(!content[0]&&tosearch[0]);

    while(res && tosearch[i]){
        if(tosearch[i]!=content[i]) res = !res;
        i++;
    }
    return res;
}


int isInside(char tosearch[], char content[]){
    return -1;
}







/*
void upper_case(char []);
*/

/*

                Array

int sum_d(int [][DIM2], int, int);
float sum_f(float [][DIM2], int, int);

int r_sum_equal(int [][DIM1], int);
int c_sum_equal(int [][DIM1], int);

int sum_diagonale(int [][DIM1], int);
int sum_diagonale_secondaria(int [], int);

int n_presente(int [], int, int);
int presente_from_1_to_n(int [], int);

*/




int main(){
    char tosearch[DIM1]="cia";
    char content[DIM1]="ciciao";



    printf("\n\tRisultato isPrefix = %d\n", isPrefix(tosearch, content));
    printf("\n\tRisultato isInside = %d\n\n", isInside(tosearch, content));

    return 0;
}