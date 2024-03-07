#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "Stack/Stack.h"
void main   (){

   Stack S;
   StackEntry e;
   CreateStack (&S);
   Push(e,&S);
   Push(e,&S);
   Push(e,&S);
   StackTop(&e,&S);
   Pop(&e,&S);
   Pop(&e,&S);
    printf("Stack Empty = %d\n",StackEmpty(&S));
   Pop(&e,&S);
   printf("Stack Full = %d\n",StackFull(&S));
    printf("Stack Empty = %d\n",StackEmpty(&S));




}
