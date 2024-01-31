#include <stdio.h>
#include <stdlib.h>


void Fun (int range)
{
   int a=0, b=1, c;
   while (a<=range)
   {
     printf("%d\n", a);
     c = a+b;
     a = b;
     b = c;
   }
}

int main()
{
   int range;

   printf("Enter range: ");
   scanf("%d", &range);

   printf("The fibonacci series is: \n");

   Fun(range);

   return 0;
}
