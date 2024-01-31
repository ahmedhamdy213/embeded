#include <stdio.h>
#include <stdlib.h>

void main()
{
   char s[100];
   int a =0 ,d=0 ,sc=0 ,i=0; //a = alphabets , d = digits , sc = special chracter
   printf(" Enter a String : ");
   gets(s);
   while( s[i] != '\0'){
    if(s[i] >= 'A' && s[i] <='Z' || s[i] >= 'a' && s[i] <='z' ){
        a++;
    }
         else if(s[i] >= '0' && s[i] <='9'  ){
        d++;
    }     else if(s[i] >= ' ' && s[i] <='\n'  ){
        sc++;
    }
    i++;
   }
   printf("The String You Enter : %s \n", s);
   printf(" the number of alphabets %d \n", a);
      printf(" the number of digits %d \n", d);
   printf(" the number of special chracter  %d  \n", sc);

}
