#include "queue.h"

void add(qnode* current, qnode* n){
  
}

void build(qnode * & head) {
  qnode* current = new qnode();
  head = current;
  qnode* previous = current;
}

void display_all(qnode * head) {
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

