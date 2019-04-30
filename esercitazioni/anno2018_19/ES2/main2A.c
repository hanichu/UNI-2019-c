#include <stdio.h>
#include <string.h>
#include "es2A.h"

/*

RICORDARSI di compilare con:
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o es2A es2A.c main2A.c -lm && ./es2A

IMPORTANTE:
NON CONSEGNARE I FILE CONTENENTI main E GLI HEADER

*/

int main() {
    char str[100]="j ds b   g z    sd";
    riduciSpazi(str);
    printf("\n\n%s\n\n", str);
  return 0;
}
