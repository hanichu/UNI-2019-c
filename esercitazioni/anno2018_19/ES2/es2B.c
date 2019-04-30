#include "es2B.h"

int moda(int v[], int n){
  int i, j, e=0, o, p=0, res=0;

  for(i=0; i<n; i++){
    e = v[i];

    for(j=i+1, o=1; j<n; j++){
      if(v[j]==e){
        o++;
      }
    }

    if(o>p){
      p=o;
      res=e;
    }
    else if(o==p&&res>e) res=e;
  }

  return res;
}
