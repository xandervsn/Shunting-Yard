#include <iostream>
#include <cstring>
#include "list.h"
using namespace std;

void printLast(node*, node*);
void caseClosed(node*, node*);

int main()
{
    node* shead = NULL;
    build(shead);
    node* qhead = NULL;
    build(qhead);

    cout << "Please input a valid infix (separated by spaces), or type QUIT to quit" << endl;
    char input[100];
    cin.get(input, 100);

    cout << "0:" << strlen(input) << endl;
    for(int i = 0; i < strlen(input); i++){
      if(input[i] != ' '){
	if(isdigit(input[i])){
	  enqueue(qhead, input[i]);
	}else {
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
    printLast(shead, qhead);

    cout << "S:" << endl;
    //cout << pop(shead) << endl;
    display_all(shead);
    
    cout << "Q:" << endl;
    //cout << dequeue(qhead) << endl;
    display_all(qhead);

    branch* tree = new branch;
    buildTree(tree);

    while(true){
      char data = pop(qhead);
      cout << data << endl;
      if(data != 'H'){
	add(tree, data);
      }else{
	break;
      }
    }

    print(tree);
    
    return 0;
}

void printLast(node* shead, node* qhead){
  if(peek(shead) != -1){
    enqueue(qhead, pop(shead));
    printLast(shead, qhead);
  }
  return;
}

void caseClosed(node* shead, node* qhead){
  if(peek(shead) != '('){
    enqueue(qhead, pop(shead));
    caseClosed(shead, qhead);
  }else{
    pop(shead);
  }
  return;
}
