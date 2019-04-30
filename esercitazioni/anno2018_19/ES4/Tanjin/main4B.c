#include <stdio.h>
#include "es4B.h"

int main() {


  char filename[] = "es4B.txt";

  FILE *fp = fopen(filename, "w");
  fputs("ciao\r", fp);
  fputs("marco", fp);
  fclose(fp);



  elimina_caratteri("es4B.txt","es4B_ris.txt"," c");



  return 0;
}
