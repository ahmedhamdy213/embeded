#include <stdio.h>
#include <stdlib.h>
void Sum(int *a,int *b,int *res){

  *res =*a+*b;

}

void main()
{
   int a,b,res;
   printf("Enter number  1 : ");
   scanf("%d",&a);
    printf("Enter number  2 : ");
   scanf("%d",&b);
   Sum(&a,&b,&res);
   printf("The Sum Of Num 1 + Num 2  : %d ",res);

}
