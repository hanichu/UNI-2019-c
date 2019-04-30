#include <stdio.h>
#include "es3B.h"


/*

gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o es3B es3B.c main3B.c -lm && ./es3B


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
  int arr[]={1, 2, 3};
  printf("%d", change(arr, 3, 4));
  return 0;
}