#include <stdio.h>
#include <stdlib.h>

void Reversef(void){
  StackEntery item;
  Stack XA;
  createStack(&XA);
  while(!StackFull(&stack)&&(item = getchar())!='\n')
    Push (item,&XA);
  while(!StackEmpty(&XA)){
    Pop (&item,&XA);
    putchar(item);

  }
  putchar('\n')

}
