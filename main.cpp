#include <iostream>
#include <cstring>
#include "list.h"
using namespace std;

int main()
{
    node* shead = NULL;
    build(shead);
    display_all(shead);
    
    node* qhead = NULL;
    build(qhead);
    display_all(qhead);

    while(true){
      int input;
      cin >> input;

      node* n = new node;
      n->data = input;
      sadd(shead, n);
      display_all(shead);
      
      node* q = new node;
      q->data = input;
      qadd(qhead, q);
      display_all(qhead);
    }
      
    return 0;
}
