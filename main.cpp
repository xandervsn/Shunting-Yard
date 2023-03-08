#include <iostream>
#include <cstring>
#include "list.h"
#include "queue.h"
using namespace std;

int main()
{
    snode* shead = NULL;
    sbuild(shead);
    sdisplay_all(shead);
    
    qnode* qhead = NULL;
    /*
    qbuild(qhead);
    qdisplay_all(qhead);
    */
    
    int input;
    cin >> input;

    snode* n = new snode;
    n->data = input;
    sadd(shead, n);
        
    sdisplay_all(shead);
    
    return 0;
}
