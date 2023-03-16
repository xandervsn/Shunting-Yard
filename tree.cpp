#include "list.h"

void print(branch* head){
  cout << endl;
  cout << head->data << endl;
  cout << head->left->data << "," << head->right->data << endl;
  cout << head->left->left->data << "," << head->left->right->data << " | " << head->right->left->data << "," << head->right->right->data << endl;  
}

int add(branch* current, char input){
  branch* b = new branch;
  if(current->data == 'H'){
    cout << "one" << endl;
    set(current, input);
    return 1;
  }
  
  if(current->right == NULL){
    cout << "two" << endl;
    current->right = b;
    set(b, input);
    return 1;
  }
  if(!isdigit(current->right->data)){
    cout << "three" << endl;
    add(current->right, input);
  }
  if(current->left == NULL){
    cout << "four" << endl;
    current->left = b;
    set(b, input);
    return 1;
  }
  if(!isdigit(current->left->data)){
    cout << "five" << endl;
    add(current->left, input);  
  }
}

void set(branch* b, char input){
  b->data = input;
  b->left = NULL;
  b->right = NULL;
}

void buildTree(branch* head){
  head->data = 'H';
  head->left = NULL;
  head->right = NULL;
}
