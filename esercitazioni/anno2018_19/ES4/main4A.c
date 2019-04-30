#include <stdio.h>
#include "es4A.h"

/*
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o es4A es4A.c main4A.c -lm

./es4A

*/

int main() {


  char *filename = "file.txt";
  FILE *f;
  int ch, i=0;
  f=fopen(filename, "r");


  /*
  legge la prima lettera di un file
  /
  if(f!=NULL){
    ch = fgetc(f);
    printf("%c (%d)", ch, ch);
  }
  fclose(f);

  */

  /*
  conta caratteri
  */
  if(f!=NULL){
    while((ch=fgetc(f))!=EOF){
      i++;
    }
    fclose(f);
  }
  printf("%d", i);
  return 0;
}
