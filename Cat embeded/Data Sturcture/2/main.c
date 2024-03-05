#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "Stack.h"


void main()
{
   Stack s;
   StackEntry e;
   CreateStack(&s);
   Push(e,&s);
   Push(e,&s);
   Push(e,&s);
   Push(e,&s);
   Push(e,&s);
   printf("Stack Empty = ", StackEmpty(&s));
   printf("Stack Full = ", StackFull(&s));
}
