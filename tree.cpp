#include "list.h"

void print(branch* head){
  //legacy, prints out entire tree
  cout << head->data << endl;
  
  cout << head->left->data << ",";
  cout << head->right->data << endl;

  cout << head->left->left->data << ",";
  cout << head->left->right->data << " ";
  cout << head->right->left->data << ",";
  cout << head->right->right->data << endl;
}

void prefix(branch* current){//lrr
  cout << current->data;
  if(current->left != NULL) {
    prefix(current->left);
  }
  if(current->right != NULL) {
    prefix(current->right);
  }
}

void infix(branch* current){//rlr
  if(current->left != NULL) {
    infix(current->left);
  }
  cout << current->data;
  if(current->right != NULL) {
    infix(current->right);
  }
}

void postfix(branch* current){//rrl
  if(current->left != NULL){
    postfix(current->left);
  }
  if(current->right != NULL){
    postfix(current->right);
  }
  cout << current->data;
}

int add(branch* current, node* queue){//creates tree from queue
  branch* b = new branch;
  branch* bb = new branch;
  if(current->data == 'H'){
    set(current, pop(queue)); //pops queue ik, just easier taking from end
    add(current, queue);
    return 1;
  }

  if(!isdigit(current->data)){ //if current is operator
    if(current->right == NULL){ //& right is empty
      current->right = b; //set right
      set(b, pop(queue));
      if(!isdigit(b->data)){ //& if you set an operator
	add(current->right, queue); //recurse
	return 1;
      }else{ //if you set a number
	current->left = bb; //set left
	set(bb, pop(queue));
	if(!isdigit(bb->data)){ //if THAT was an operator
	  add(current->left, queue); //recurse
	  return 1;
	}
      }
    }
    //if none of that worked
    if(current->left == NULL){ //if left is empty
      current->left = b; //set left
      set(b, pop(queue));
      if(!isdigit(b->data)){ //same as above from here
	add(current->left, queue);
	return 1;
      }else{
	current->left = bb;
	set(bb, pop(queue));
	if(!isdigit(bb->data)){
	  add(current->left, queue);
	  return 1;
	}
      }
    }
  }
}

void set(branch* b, char input){
  //readibility
  b->data = input;
  b->left = NULL;
  b->right = NULL;
}

void buildTree(branch* head){
  head->data = 'H';
  head->left = NULL;
  head->right = NULL;
}
