//list.h
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

struct node
{
    int data;
    node* next;
};

/* *****************YOUR TURN! ******************************** */
/* PLACE YOUR PROTOTYPE HERE */
void sadd(node*, node*);
void qadd(node*&, node*); 

/* These functions are already written and can be called to test out your code */
void build(node * & head);      //supplied
void display_all(node * head);  //supplied
