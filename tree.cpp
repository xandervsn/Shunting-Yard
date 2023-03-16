#include "list.h"

void print(branch* head){
  cout << endl;
  cout << head->data << endl;
  cout << head->left->data << "," << head->right->data << endl;
  cout << head->left->left->data << "," << head->left->right->data << " | " << head->right->left->data << "," << head->right->right->data << endl;  
}

int add(branch* current, char input){
  
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
