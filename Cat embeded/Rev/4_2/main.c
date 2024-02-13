#include <stdio.h>
#include <stdlib.h>

void main()
{
    int N ,P ,R =1 ;
   printf("Enter Number : ");
   scanf("%d",&N);
    printf("Enter Power : ");
   scanf("%d",&P);
   for(int i =0;i < P ; i++){
    R*=N;
   }
  printf("Result = %d",R);
}
