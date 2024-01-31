#include <stdio.h>
#include <stdlib.h>

void main()
{
   char s[100] , c;
   int i =0 ;
   printf("Enter String : ");
   gets(s);
   printf("\nEnter Char You Want To Search : ");
   scanf("%c",&c);
   while(s[i]!= '\0'){
    if (s[i] == c){

        break;
    }
    i++;
   }
   printf(" We Found The Char %c  In Index %d" ,c,i);
}
