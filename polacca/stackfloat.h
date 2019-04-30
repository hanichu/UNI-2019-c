#ifndef STACKFLOAT
#define STACKFLOAT

struct cellfloat{
  float info;
  struct cellfloat *next;
};

typedef struct cellfloat *stackfloat;

int push_float(stackfloat *pstack, float n);

int pop_float(stackfloat *pstack, float* pn);

int is_empty_float(stackfloat stack);

stackfloat empty_stack_float();
#endif

