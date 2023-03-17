/* Xander Siruno-Nebel
   C++/Data Structs, Galbraith
   3/16/23

   Shunting Yard Algorith: a program that employs an infix to postfix algorithm, throws that into a binary expression tree, then traverses that tree to return infix, postfix, or prefix notation
*/

#include <iostream>
#include <cstring>
#include "list.h"
using namespace std;

void printLast(node*, node*);
void caseClosed(node*, node*);

int main()
{
  //stack and queue init
  node* shead = NULL;
  build(shead);
  node* qhead = NULL;
  build(qhead);
  
  cout << "Please input a valid infix (separated by spaces), or type QUIT to quit" << endl;
  char input[100];
  cin.get(input, 100);
  
  for(int i = 0; i < strlen(input); i++){
    if(input[i] != ' '){ //ignore spaces
      if(isdigit(input[i])){ //numbers go straight to queue
	enqueue(qhead, input[i]);
      }else{
	//just going through cases, PEMDAS
	if(input[i] == '(' || input[i] == '^'){
	  push(shead, input[i]);
	}else if(input[i] == '*' || input[i] == '/'){
	  if(peek(shead) == '^' || peek(shead) == '*' || peek(shead) == '/'){
	    enqueue(qhead, pop(shead));
	    push(shead, input[i]);
	  }else{
	    push(shead, input[i]);
	  }
	}else if(input[i] == '+' || input[i] == '-'){
	  if(peek(shead) == '^' || peek(shead) == '*' || peek(shead) == '/' || peek(shead) == '+' || peek(shead) == '-'){
	    enqueue(qhead, pop(shead));
	    push(shead, input[i]);
	  }else{
	    push(shead, input[i]);
	  }
	}else if(input[i] == ')'){
	  caseClosed(shead, qhead);
	}
      }
    }
  }
  //boots stack stragglers
  printLast(shead, qhead);
  
  //binary tree init
  branch* tree = new branch;
  buildTree(tree);

  //display_all(qhead);
  
  //add employed twice in case left branch was missed
  add(tree, qhead);
  add(tree, qhead);
  
  while(true){
    cout << "Input 'IN' for infix, 'POST' for postfix, and 'PRE' for prefix notations. Input 'QUIT' to quit." << endl;
    cin >> input;
    if(strcmp(input, "IN") == 0){
      infix(tree);
      cout << endl;
    }else if(strcmp(input, "POST") == 0){
      postfix(tree);
      cout << endl;
    }else if(strcmp(input, "PRE") == 0){
      prefix(tree);
      cout << endl;
    }else if(strcmp(input, "QUIT") == 0){
      break;
    }
  }
   
  return 0;
}

void printLast(node* shead, node* qhead){
  //kicks out last elements in stack
  if(peek(shead) != -1){
    enqueue(qhead, pop(shead));
    printLast(shead, qhead);
  }
  return;
}

void caseClosed(node* shead, node* qhead){
  //closed parentheses case
  if(peek(shead) != '('){
    enqueue(qhead, pop(shead));
    caseClosed(shead, qhead);
  }else{
    pop(shead);
  }
  return;
}
