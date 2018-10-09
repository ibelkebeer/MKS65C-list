#include <stdio.h>
#include "linkedlist.h"

struct node {int i; struct node* nextl;};

void print_list(struct node* cur){
  while(cur -> next){
    printf("%d, ",cur -> i);
    cur = cur -> next;
  }
  printf("%d\n",cur -> i);
}

struct node* insert_front(struct node* cur, int val){
  struct node first = calloc(1, sizeof(struct node));
  free(first);
  first.i = val;
  first.next = cur;
  return &first;
}

struct node* free_list(struct node* cur){
  struct node* first = cur;
  while(cur -> next){
    free(cur);
    cur = cur -> next;
  }
  free(cur);
  return first;
}
