#include "testStack.h"
#include <stdio.h>
#include <assert.h>
#include <malloc.h>
#include <stdlib.h>


struct Stack *stackCreate(){
  Stack *stack = malloc (sizeof (Stack));
  assert (stack !=NULL);
  stack->tail =NULL;
  stack->head = NULL;
  //stack->temp = NULL;
  stack->length = 0;
  return stack;
}

struct stackElement *StackElementCreate (int data){
  struct StackElement *stackelem = malloc (sizeof (StackElement));
  stackelem->data =data;
  printf("value of data:%d\n", stackelem->data);
  stackelem->next = NULL;
  return stackelem;
  }
  
  
 void stackAdd (struct Stack *stack, struct StackElement *elem){
   
  if (elem == 0){
     puts ("full storage\n");
  }
  
  if (stack->head == NULL && stack->tail == NULL){
    stack->tail = elem;
    stack->head = elem;
    printf ("[%d] -> ", elem->data);
  }
  else {
    stack->tail = stack->head;
    stack->head = elem;
    while (stack->head != NULL ){
      printf("[%d]-->\n", elem->data);
      stack->head = stack->head->next;
    }
  stack->head = elem;
  }
  stack->head->next = elem;
  stack->length +=1; 
 }
 

 
 
struct StackElement *stackRemove (struct Stack *stack){
  if (stack->head == NULL){
    puts("nothing inside!!!!!!!!");
   return 0;
  }
  else {
    //stack->temp == stack ->head;
    printf ("[remove value %d]\n", stack->head->data);
    stack->head = stack->head->next;
    free (stack->head);
   // printf ("remove value %d\n", stack->head);
    stack->length -=1;
    return stack;
  }
}


 
  
  
  
  
  