struct node {int i; struct node* next;};
void print_list(struct node* cur);
struct node* insert_front(struct node* cur, int val);
struct node* free_list(struct node* cur);
