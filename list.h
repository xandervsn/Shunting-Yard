//list.h
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

struct snode
{
    int data;
    snode* next;
};

/* *****************YOUR TURN! ******************************** */
/* PLACE YOUR PROTOTYPE HERE */
void sadd(snode*, snode*);


/* These functions are already written and can be called to test out your code */
void sbuild(snode * & head);      //supplied
void sdisplay_all(snode * head);  //supplied
