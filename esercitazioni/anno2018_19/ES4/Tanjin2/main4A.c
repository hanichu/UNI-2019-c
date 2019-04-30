#include <stdio.h>
#include "es4A.h"

/*
gcc -g3 -std=gnu89 -fuse-ld=gold -fsanitize=address -fsanitize=undefined -pedantic-errors -Wall -Wextra -o es4A es4A.c main4A.c

./es4A

*/

int main() {
  char filename[] = "es4A.txt";
  int chars = 0,words = 0,lines = 0;
  FILE *fp = fopen(filename, "w");
  fputs("\r\n\n\r\r\n\r\r\n", fp) ;
  fclose(fp);

  wc(filename,&chars,&words,&lines);

  printf("CHARS %d\nWORDS %d\nLINES %d\n",chars,words,lines);



  /*

  int i;
  int c = 0;
  int w = 0;
  int nl = 0;
  FILE *foca;
  char arr [10]= {'\r','\n','\n','\r','\r','\n','\r','\r','\n','\0'};

  foca = fopen("prova","w");
  for( i = 0; *(arr+i) != '\0'; i++)
  {
      fputc(*(arr+i),foca);
  }
  fclose(foca);
  if(wc("prova", &c, &w, &nl))
  printf(" char:%d  word:%d  nl:%d\n",c,w,nl);

  */


  return 0;
}
