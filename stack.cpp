#include "list.h"

void push(node* current, node* n){
  if(current->next == NULL){
    current->next = n;
    n->next = NULL;
    return;
  }else{
    push(current->next, n);
  }
}

int pop(node* &head){
  if(head->next == NULL){
    cout << "This stack is empty!" << endl;
    return -1;
  }
  int data = head->data;
  node* temp = head;
  head = head->next;
  delete temp;
  
  return data;
}

int peekt(node* head){
  if(head->next == NULL){
    cout << "This stack is empty!" << endl;
    return -1;
  }
  return head->data;
}

void build(node* &head) {
  node* current = new node();
  head = current;
  head->data = -1;
  node* previous = current;
}

void display_all(node* head) {
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}
