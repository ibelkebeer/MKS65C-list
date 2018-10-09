#include <stdio.h>
#include "linkedlist.c"

int main(){
  struct node n1;
  printf("Current list: ");
  struct node* test = &n1;
  print_list(test);
  return 0;
}
