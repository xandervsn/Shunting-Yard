#include "list.h"

void sadd(snode* current, snode* n){
  if(current->next == NULL){
    current->next = n;
    n->next = NULL;
  }else{
    sadd(current, n);
  }
}

void sbuild(snode* &head) {
  snode* current = new snode();
  head = current;
  snode* previous = current;
}

void sdisplay_all(snode* head) {
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}
