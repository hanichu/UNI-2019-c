#include <stdio.h>
#include "es3D.h"


/*
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o es3D es3D.c main3D.c -lm && ./es3D

*/

int main(){
  int A[]={0, 4, 3, 2, 1, 0, 5}, res;

  int lung = sizeof(A)/sizeof(A[0]);
  res = sequenza_decrescente_massima (A, &lung);
  printf("\tRisultato = %d\tLunghezza = %d\n", res, lung);
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