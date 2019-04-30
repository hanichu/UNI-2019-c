#include<stdio.h>
#include<stdlib.h>
#include"stackfloat.h"

int push_float(stackfloat *pstack, float n) {
  stackfloat pc = (stackfloat)malloc(sizeof(struct cellfloat));
  if (pc) {
    pc->next = *pstack;
    pc->info = n;
    *pstack = pc;
    return 1;
  }
  else 
    return 0;
}


int pop_float(stackfloat *pstack, float* pn) {
  stackfloat pc;
  if (*pstack) {
    pc = *pstack;
    *pstack = (*pstack)->next;
    *pn = pc->info;
    free(pc);
    return 1;
  }
  else
    return 0;
}


int is_empty_float(stackfloat stack) {
  return (stack == NULL);
}

stackfloat empty_stack_float() {
  return NULL;
}

