#include "list.h"

void sadd(node* current, node* n){
  if(current->next == NULL){
    current->next = n;
    n->next = NULL;
    return;
  }else{
    sadd(current->next, n);
  }
}

void build(node* &head) {
  node* current = new node();
  head = current;
  node* previous = current;
}

void display_all(node* head) {
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}
