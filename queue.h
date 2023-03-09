//list.h
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

struct qnode
{
    int data;
    qnode * next;
};

/* *****************YOUR TURN! ********************\
************ */
/* PLACE YOUR PROTOTYPE HERE */
void qadd(qnode* &head, qnode*);


/* These functions are already written and can be c\
alled to test out your code */
void qbuild(qnode * & head);      //supplied
void qdisplay_all(qnode * head);  //supplied
