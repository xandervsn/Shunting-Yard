//list.h
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

//tree
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

void set(branch*, char);
void postfix(branch*);
void prefix(branch*);
void infix(branch*);
int add(branch*, node*);
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
