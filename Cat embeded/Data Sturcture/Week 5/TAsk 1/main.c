#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#include "Stack/Stack.h"
#include "queue/queue.h"


void main    (){
Queue q;
Stack S;
CreateQueue(&q);
CreateStack(&S);
QueueEntry e;
StackEntry z;
printf("Enter A IN Stack :");
scanf("%d", &e);
printf("Enter A IN Queue :");
scanf("%d", &z);
Push(&z,&S);
Appened(e,&q);
printf("\n%d\n",StackSize(&S));
printf("%d\n",QueueSize(&q));
int _;
Pop(&_,&S );
printf("%d",z);


}