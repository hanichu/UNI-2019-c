#ifndef STACKEXP
#define STACKEXP

typedef enum enum_type {Operator, Operand} Type;

typedef struct s_info{
  char operator; /*use of union?*/
  float operand;
  Type type;    /*Operand or Operator?*/
} Info;

struct cellexp{
  Info info;
  struct cellexp *next;
};

typedef struct cellexp* stackexp;

int push_exp(stackexp *pstack, Info i);
int pop_exp(stackexp *pstack, Info* i);
int is_empty_exp(stackexp stack);
stackexp empty_stack_exp();
void parse_string(stackexp *pstack, char* expression);
void print_stack_exp(stackexp l);
#endif

