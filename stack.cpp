#include "list.h"

void push(node* current, char input){
  //adds node to the end of a linked list
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

//dequeue is in here because i mixed up lifo n fifo
char dequeue(node* head){
  //returns head of linked list, then deletes it
  if(head->next == NULL){
    return 'H';
  }
  node* first = head->next;
  int data = first->data;
  head->next = first->next;
  delete first;
  
  return data;
}

char peek(node* head){
  //returns head of linked list
  if(head->next == NULL){
    return -1;
  }
  if(head->next->next == NULL){
    return head->next->data;
  }else{
    peek(head->next);
  }
}

/* CODE TAKEN FROM FINAL-PRACTICE */
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
