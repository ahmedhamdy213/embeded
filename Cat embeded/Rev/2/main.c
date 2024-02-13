#include <stdio.h>
#include <stdlib.h>

void main()
{
    int Year;
   printf("Enter Number : ");
   scanf("%d",&Year);
   if((Year /4 == 1 && Year /100 != 1 )|| (Year / 400 ==1)){//another Condotion Year %4 == 0 && Year %100 != 0 )|| (Year % 400 ==0
    printf("Leap Year");
   }else{
     printf("Not Leap");
   }
}
