#include "list.h"

void push(node* current, char input){
  node* n = new node;
  n->data = input;
  if(current->next == NULL){
    current->next = n;
    n->next = NULL;
    return;
  }else{
    push(current->next, input);
  }
}

char pop(node* &head){
  if(head->next == NULL){
    cout << "This stack is empty!" << endl;
    return -1;
  }
  int data = head->data;
  node* temp = head;
  head = head->next;
  delete temp;
  
  return data - 48;
}

char peekt(node* head){
  if(head->next == NULL){
    cout << "This stack is empty!" << endl;
    return -1;
  }
  return head->next->data;
}

void build(node* &head) {
  node* current = new node();
  head = current;
  head->data = 'H';
  node* previous = current;
}

void display_all(node* head) {
  while (head != NULL) {
    cout << char(head->data) << " ";
    head = head->next;
  }
  cout << endl;
}
