#ifndef testStack_H
#define testStack_H
#include <stdio.h>
#include <assert.h>
#include <malloc.h>

 typedef struct StackElement StackElement;
 struct StackElement{
   StackElement *next;
   int data;
 };


  typedef struct Stack {
    StackElement *head;
    StackElement *tail;
  //  StackElement *temp;
    int length;
 } Stack;
  
Stack *stackCreate();
struct stackElement *StackElementCreate (int data);
void stackAdd (Stack *stack, StackElement *elem);
StackElement *stackRemove (Stack *stack);
#endif // testStack_H
