#include "list.h"

void enqueue(node* &head, node* n){
  push(head, n);
}

int dequeue(node* current){
  if(current->next == NULL){
    cout << "This queue is empty!" << endl;
    return -1;
  }
  if(current->next->next == NULL){
    node* temp = current->next;
    int data = temp->data;
    current->next = NULL;
    delete temp;
    
    return data;
  }else{
    dequeue(current->next);
  }
}




//peek() is undefined in stack.cpp, no idea why, but i gotta hack it
int peek(node* head){
  return peekt(head);
}

