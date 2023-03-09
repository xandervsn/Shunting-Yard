#include "list.h"

void qadd(node* &head, node* n){
  node* temp = head;
  head = n;
  head->next = temp;
}


