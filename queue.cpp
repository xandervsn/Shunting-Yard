#include "list.h"

void enqueue(node* &head, char input){
  //bit hacky, stack and queue difference here is how elements are accessed
  push(head, input);
}

char pop(node* &current){
  //returns last node of a linked list, then deletes it
  if(current->next == NULL){
    return 'H';
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
  //i got it working but im too scared to delete this
  return peek(head);
}

