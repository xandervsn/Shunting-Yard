#include "list.h"

void print(branch* head){
  cout << endl;
  cout << head->data << endl;
  cout << head->left->data << "," << head->right->data << endl;
  cout << head->left->left->data << "," << head->left->right->data << " | " << head->right->left->data << "," << head->right->right->data << endl;  
}

int add(branch* current, char input){
  if(current->data == 'H'){
    current->data = input;
    return 1;
  }else if(current->right == NULL){
    branch* b = new branch;
    current->right = b;
    current->right->data = input;
    current->right->left = NULL;
    current->right->right = NULL;
    return 1;
  }else if(current->left == NULL){
    branch* b = new branch;
    current->left = b;
    current->left->data = input;
    current->left->left = NULL;
    current->left->right = NULL;
    return 1;
  }else{
    if(!add(current->right, input)){
      add(current->left, input);
    }
  }
  return 0;
}

void buildTree(branch* head){
  head->data = 'H';
  head->left = NULL;
  head->right = NULL;
}
