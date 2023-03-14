#include "list.h"

void add(branch* current, char input){
  if(current->data == 'H'){
    current->data = input;
  }
}

void buildTree(branch* head){
  head->data = 'H';
  head->left = NULL;
  head->right = NULL;
}
