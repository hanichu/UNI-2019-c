#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
gcc -g3 -std=gnu89 -fuse-ld=gold -fsanitize=address -fsanitize=undefined -pedantic-errors -Wall -Wextra -o main main.c

./main

*/

struct node{
    int info;
    struct node *next;
};
typedef struct node *list;


void printlist(list l){
    while(l!=NULL){
        printf("%d ", l->info);
        l=l->next;
    }
}

void destroy(list *pl){
    list l;
    while(*pl){
        l=(*pl)->next;
        free(*pl);
        *pl=l;
    }
}

int append(list *pl, int elem){
    if(*pl==NULL){
        list supp;
        supp = (list)malloc(sizeof(struct node));
        supp->info=elem;
        supp->next=NULL;
        *pl=supp;
    }else if(((*pl)->info)==elem){
        return 0;
    }else{
        return append(&((*pl)->next), elem);
    }
    return 0;
}


int main(){
    list p;
    p = NULL;


/*
    p = (list)malloc(sizeof(struct node));

m
    p->info=12;

    p->next=NULL;
    p->next = (list)malloc(sizeof(struct node));
    p->next->info=5;
    p->next->next=NULL;
*/
    append(&p, 5);
    append(&p, 6);
    append(&p, 6);
    append(&p, 0);

    printlist(p);
    destroy(&p);
    return 0;

}