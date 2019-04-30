#include "es2C.h"

int check(char s[], char M[RIGHE][COLONNE], int i, int j, int id){
  int k = 0, res = 0;

  while(s[k] && !res){
    if(s[k] == M[i][j] && id == 1 && j < COLONNE ) j++;
    else if(s[k] == M[j][i] && id == 2 && j < RIGHE) j++;
    else if(s[k] == M[j][i] && id == 3 && j < RIGHE && i < COLONNE){
      j++;
      i++;
    }
    else res = !res;
    k++;
  }
  return !res;
}


int contaOccorrenze(char s[], char M[RIGHE][COLONNE]) {
  int i, j, occ=0;

  for(i=0; i < RIGHE; i++){
    for(j=0; j < COLONNE; j++){
      if(s[0] == M[i][j] && check(s, M, i, j, 1)) occ++;
    }
  }

  for(i=0; i < COLONNE; i++){
    for(j=0; j < RIGHE; j++){
      if(s[0] == M[j][i] && check(s, M, i, j, 2)) occ++;
      if(s[0] == M[j][i] && check(s, M, i, j, 3)) occ++;
    }
  }
  return occ;
}
