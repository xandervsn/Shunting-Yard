#include <iostream>
#include <cstring>
#include "list.h"
using namespace std;

int main()
{
    node* shead = NULL;
    build(shead);
    node* qhead = NULL;
    build(qhead);

    while(true){
      cout << "Please input a valid infix (separated by spaces), or type QUIT to quit" << endl;
      char input[100];
      cin >> input;

      if(strcmp(input, "QUIT") == 0){
        break;
      }
      
      for(int i = 0; i < strlen(input); i++){
	if(input[i] == ' '){
          //do nothing
        }else if(isdigit(input[i])){
	  enqueue(qhead, input[i]);
        }else {
          if(input[i] == '(' || input[i] == '^'){
	    push(shead, input[i]);
          }else if(input[i] == '*' || input[i] == '/'){
	    if(peek(shead) == '^'){
	      enqueue(qhead, input[i]);
	      push(shead, input[i]);
	    }else{
	      push(shead, input[i]);
	    }
	  }else if(input[i] == '+' || input[i] == '-'){
	    cout << "peak" << peek(shead) << endl;
	    if(peek(shead) == '^' || peek(shead) == '*' || peek(shead) == '/'){
	      enqueue(qhead, pop(shead));
	      push(shead, input[i]);
	    }else{
	      push(shead, input[i]);
	    }
	  }
        }
      }
    }

    cout << peek(shead) << endl;
    display_all(shead);

    cout << dequeue(qhead) << endl;
    display_all(qhead);
    
    return 0;
}
