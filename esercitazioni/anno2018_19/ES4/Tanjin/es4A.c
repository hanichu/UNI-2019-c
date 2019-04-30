#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "es4A.h"


int wc(const char *filename, int *chars, int *words, int *lines){

    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    int risp = 1;
    char delim[] = " \n\r";
    char *ptr = NULL;

    fp = fopen(filename, "r");

    if (fp == NULL){
        return !risp;
    }
    else{

        while((read = getline(&line, &len, fp)) != -1){
            *chars += ((int)read);
            *lines += 1;

            ptr = strtok(line, delim);
            while(ptr != NULL){
              *words += 1;
            	ptr = strtok(NULL, delim);
            }
        }
    }
    free(line);
    free(ptr);
    fclose(fp);
    return risp;
}

