#include "es2A.h"

void riduciSpazi(char str[]) {
  int i, j;
  for(i=0; str[i]!='\0'; i++){
    if(str[i]==' '&&str[i+1]==' '){
      for(j=i; str[j]!='\0'; j++){
        str[j]=str[j+1];
      }
      i--;
    }
  }
  return;
}
