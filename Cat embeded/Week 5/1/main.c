#include <stdio.h>
#include <stdlib.h>

void main()
{
  int x =10 ,*ptr =&x;
  printf("X without pointer = %d\n",x);
  *ptr=20;
  printf("X With Ptr After change = %d",*ptr);
}
