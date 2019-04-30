#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "es4A.h"

/*int main(int argc, char const *argv[]) {
  int i;
   esempio utilizzo parametri da linea di comando
  for (i=0; i<argc; i++) {
    printf("%d: \"%s\"\n", i, argv[i]);
  }
  return 0;
}*/


int main(){

  char filename[] = "es4A.txt";
  /*int chars = 0,words = 0,lines = 0;
  FILE *fp = fopen(filename, "w");
  fputs("\r\n", fp) ;
  fclose(fp);

  wc(filename,&chars,&words,&lines);

  printf("CHARS %d\nWORDS %d\nLINES %d\n",chars,words,lines);*/

  FILE *fp = fopen(filename, "r");
  char* buffer = NULL;
  int i = 0;
  char ch;


  /*fputs("\r\naaaa", fp);
  fclose(fp);*/
  /*fp = fopen(filename, "r");*/

  while ((ch = getc(fp)) != EOF){
    /*buffer[i]=ch;*/
    i++;
  }
  /*buffer[i] = '\0';*/
  buffer = (char *)malloc((i+1) * sizeof(char));

  fp = fopen(filename, "r");

  i = 0;
  while ((ch = getc(fp)) != EOF){
    buffer[i]=ch;
    i++;
  }
  buffer[i] = '\0';

  i = 0;
  while(buffer[i]){
    printf("%c",buffer[i]);
    i++;
  }

  printf("\n%d",buffer[i]);
  free(buffer);









/********************************************************/

 /* FILE *fp = fopen(filename, "w");
  char* buffer = NULL;
  size_t len;



  ssize_t bytes_read;
  int i=0;
  fputs("\r\naaaa", fp);
  fclose(fp);
  fp = fopen(filename, "r");
  bytes_read = getdelim( &buffer, &len, EOF, fp);

  while(buffer[i]){
    printf("%c",buffer[i]);
    i++;
  }

  printf("%d",buffer[i]);*/


/*****************************************************/
  /*char filename[] = "test.txt";

  int chars = 0,words = 0,lines = 0;

  wc(filename,&chars,&words,&lines);

  printf("%d %d",chars,lines);

  FILE *fp;
  char *line = NULL;
  size_t len = 0;
  ssize_t read;


  int char_sum = 0,line_sum = 0,word_sum = 0;
  char delim[] = " \n\r";
  char *ptr;

  fp = fopen("test.txt", "r");


  if (fp == NULL)
    exit(EXIT_FAILURE);

  while ((read = getline(&line, &len, fp)) != -1) {
    char_sum += ((int)read);
    line_sum++;

    ptr = strtok(line, delim);
    while(ptr != NULL){
      word_sum++;
    	ptr = strtok(NULL, delim);
    }
  }

  printf("chars    : %d\n",char_sum);
  printf("lines    : %d\n",line_sum);
  printf("words    : %d\n",word_sum);*/
  return 0;
}
