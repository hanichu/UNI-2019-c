#include <stdio.h>
#include "es3A.h"

/*

gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o es3A es3A.c main3A.c -lm && ./es3A


*/

/*
int main(int argc, char const *argv[]) {
  int i;

  for (i=0; i<argc; i++) {
    printf("%d: \"%s\"\n", i, argv[i]);
  }
  return 0;
}
*/

int main(){
  char s[]=" al aa";
  printf("%d", palindroma_ns(s));
  return 0;
}