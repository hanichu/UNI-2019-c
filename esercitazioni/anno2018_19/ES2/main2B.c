#include <stdio.h>
#include "es2B.h"

/*

RICORDARSI di compilare con:
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o es2B es2B.c main2B.c -lm && ./es2B

IMPORTANTE:
NON CONSEGNARE I FILE CONTENENTI main E GLI HEADER

*/

int main() {
  int v[] = {4, 2, 1, -4, -6};
  int m;

  m = moda(v, sizeof(v)/sizeof(v[0]));

  printf("Moda: %d\n", m);

  return 0;
}
