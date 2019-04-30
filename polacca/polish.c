#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"stackexp.h"
#include"stackfloat.h"

float evaluate(char* stringexpression) {
  stackexp stexp;
  stackfloat eval;

  /*Last item in eval is the result*/
  float res;
  
  stexp = empty_stack_exp();
  eval = empty_stack_float();

  parse_string(&stexp, stringexpression);

  print_stack_exp(stexp);

  while (!is_empty_exp(stexp)) {
    Info item;
    assert(pop_exp(&stexp, &item)!=0);

    if (item.type == Operand) 
      assert(push_float(&eval, item.operand)!=0);
    else {
      float op1;
      float op2;

      assert(pop_float(&eval, &op2)!=0);
      assert(pop_float(&eval, &op1)!=0);

      switch (item.operator) {
        case '+':
          assert(push_float(&eval, op1+op2)!=0);
          break;
        case '-':
          assert(push_float(&eval, op1-op2)!=0);
          break;
        case '*':
          assert(push_float(&eval, op1*op2)!=0);
          break;
        case '/':
          assert(push_float(&eval, op1/op2)!=0);
          break;
      }
    }
  }

  assert(pop_float(&eval, &res)!=0);
  return res;
}

int main(){
  char buffer[1024];
  printf("Insert the expression:\n");
  gets(buffer);
  printf("\nResult: %f\n", evaluate(buffer));

  return 0;
}
