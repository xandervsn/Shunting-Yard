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

    int i = 0;
    while(i < 4){
      int input;
      cin >> input;

      /*      
      node* n = new node;
      n->data = input;
      push(shead, n);
      display_all(shead);
      */
      
      
      node* q = new node;
      q->data = input;
      enqueue(qhead, q);
      display_all(qhead);
      

      i++;
    }
    /*
    cout << peek(shead) << endl;
    cout << pop(shead) << endl;
    display_all(shead);
    */

    cout << dequeue(qhead) << endl;
    display_all(qhead);
    
    return 0;
}
