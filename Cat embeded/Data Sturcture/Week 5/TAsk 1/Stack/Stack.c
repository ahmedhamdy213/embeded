#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "../Global.h"

#include "Stack.h"


#ifdef LINKED_STACK

//Linked


StackNode *MakeStackNode(StackEntry item){
	StackNode *p;

	p=(StackNode *)malloc(sizeof(StackNode));
	p->entry=item;
	p->next=NULL;
	return p;
}


void Push(StackEntry item, Stack *ps){
	StackNode *p=MakeStackNode(item);
	p->next=ps->top;
	ps->top=p;
}

void Pop(StackEntry *pitem, Stack *ps){
	StackNode *p;

	*pitem=ps->top->entry;
	p=ps->top;
	ps->top=ps->top->next;
	free(p);
}

int StackEmpty(Stack *ps){
	return ps->top==NULL;
}

int StackFull(Stack *ps){
	return 0;
}

void CreateStack (Stack *ps){
	ps->top=NULL;
}

void StackTop(StackEntry *pitem, Stack *ps){
	*pitem=ps->top->entry;
}

int	StackSize(Stack *ps){
  int x;
  StackNode *ptrs=ps->top;
  for(x=0; ptrs; ptrs=ptrs->next)
    x++;
  return x;
}

void ClearStack(Stack *ps){
	StackNode *p=ps->top;
	while(p){
		p=p->next;
		free(ps->top);
		ps->top=p;
	}
}

void TraverseStack(Stack *ps, void (*pvisit)(StackEntry)){
	
	for(StackNode *p=ps->top; p; p=p->next)
		(*pvisit)(p->entry);

}


#else
//array Based



void Push(StackEntry item, Stack *ps){
	ps->entry[ps->top++] = item;
}



void Pop(StackEntry *item, Stack *ps){
	*item = ps->entry[--ps->top];
}


int StackEmpty(Stack *ps){
     return ps->top <= 0;
	 
}


int StackFull(Stack *ps){
	return ps->top >= MAXSTACK;
	
}


void CreateStack(Stack *ps){
     ps->top = 0;
}


void StackTop(StackEntry *item, Stack *ps){                   
    *item = ps->entry[ps->top-1];  
}                    



int StackSize(Stack *ps){
     return ps->top;
}


void ClearStack(Stack *ps){
     ps->top = 0;
}





void TraverseStack(Stack *ps, void (*pvisit)(StackEntry)){
	for(int i=ps->top; i>0; i--)
		(*pvisit)(ps->entry[i-1]);
}                                             

#endif