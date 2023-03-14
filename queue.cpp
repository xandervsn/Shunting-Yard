#include "list.h"

void enqueue(node* &head, char input){
  push(head, input);
}

char pop(node* &current){
  if(current->next == NULL){
    cout << "This queue is empty!" << endl;
    return -1;
  }
  if(current->next->next == NULL){
    node* temp = current->next;
    char data = temp->data;
    current->next = NULL;
    delete temp;
    
    return data;
  }else{
    pop(current->next);
  }
}




//peek() is undefined in stack.cpp, no idea why, but i gotta hack it
char peeek(node* head){
  return peek(head);
}

