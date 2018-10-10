#include <stdio.h>
#include "linkedlist.c"

int main(){
  struct node* n1 = calloc(1, sizeof(struct node));
  free(n1);
  n1 -> i = 5;
  printf("Current list, 1 node with val = 5: ");
  print_list(n1);
  printf("Current list, 3 nodes with vals = 20, 10, and 5 respectively: ");
  print_list(insert_front(insert_front(n1, 10), 20));
}
