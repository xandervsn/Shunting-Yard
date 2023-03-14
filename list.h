//list.h
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

struct branch
{
  char data;
  branch* left;
  branch* right;
};

/* SOME CODE FROM FINAL-PRACTICE */
struct node
{
    char data;
    node* next;
};

void print(branch*);
int add(branch*, char);
void buildTree(branch*);

void push(node* current, char);
char pop(node*&);
char peek(node*);
char peeek(node*);

char dequeue(node*); 
void enqueue(node*&, char);

/* These functions are already written and can be called to test out your code */
void build(node * & head);      //supplied
void display_all(node * head);  //supplied
