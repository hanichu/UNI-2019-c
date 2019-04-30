#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stackexp.h"

int push_exp(stackexp *pstack, Info i) {
  stackexp pc = (stackexp)malloc(sizeof(struct cellexp));
  if (pc) {
    pc->next = *pstack;
    pc->info = i;
    *pstack = pc;
    return 1;
  }
  else
    return 0;
}


int pop_exp(stackexp *pstack, Info* i) {
  stackexp pc;
  if (*pstack) {
    pc = *pstack;
    *pstack = (*pstack)->next;
    *i = pc->info;
    free(pc);
    return 1;
  }
  else
    return 0;
}


int is_empty_exp(stackexp stack) {
  return (stack == NULL);
}

stackexp empty_stack_exp() {
  return NULL;
}


void parse_string(stackexp *pstack, char* expression) {
  Info parsed;
  stackexp support = empty_stack_exp();
  while (*expression!='\0') {
    while (*expression==' ') /*skip blanks*/
      expression++;
    switch(*expression) {
      case '+':
      case '*':
      case '-':
      case '/':
        parsed.type = Operator;
        parsed.operator = *expression;
        break; /*Dentro lo switch va bene usare il break, no nei cicli*/
      default:
        parsed.type = Operand;
        sscanf(expression, "%f", &parsed.operand); /*sscanf -> Mangia l'input da una stringa che gli passiamo (al posto del solito standard input)*/
    }
    while (*expression!='\0' && *expression != ' ')
      expression++;
    assert(push_exp(&support, parsed)!=0);
  }
  /*invert the order*/
  *pstack = NULL;
  while (pop_exp(&support, &parsed)) {
    assert(push_exp(pstack, parsed)!=0);
  }
}


void print_stack_exp(stackexp l) {
  while (l) {
    if (l->info.type==Operator)
      printf("%c \n", l->info.operator);
    else
      printf("%f \n", l->info.operand);
    l = l->next;
  }
}


/* main to test */
/*
int main() {
  stackexp myexp = empty_stack();

  char string[] = "2.7 3.5 + 4.7 *";

  parse_string(&myexp, string);
  print_stack(myexp);

  return 0;
}
*/
