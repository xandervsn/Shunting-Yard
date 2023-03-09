//list.h
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;


/* SOME CODE FROM FINAL-PRACTICE */
struct node
{
    int data;
    node* next;
};

void push(node* current, node* n);
int pop(node*&);
int peek(node*);
int peekt(node*);

void enqueue(node*&, node*); 
int dequeue(node*);

/* These functions are already written and can be called to test out your code */
void build(node * & head);      //supplied
void display_all(node * head);  //supplied
