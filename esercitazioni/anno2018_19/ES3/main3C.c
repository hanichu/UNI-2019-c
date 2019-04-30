#include <stdio.h>
#include "es3C.h"

/*
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o es3C es3C.c main3C.c -lm && ./es3C

*/

int main(){
  int peso[] = {1, 2, 3, 6},
      valore[] = { 5, 5, 2, 9},
      peso_massimo = 6,
      valore_massimo, n;

  n = sizeof(peso)/sizeof(peso[0]);
  valore_massimo = zaino (valore, peso, n, peso_massimo);
  printf("%d", valore_massimo);
  return 0;
}


/*
int main(int argc, char const *argv[]) {
  int i;

  for (i=0; i<argc; i++) {
    printf("%d: \"%s\"\n", i, argv[i]);
  }
  return 0;
}
*/