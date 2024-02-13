#include <stdio.h>
#include <stdlib.h>

void main()
{
    char Op;
    int Number1 ,Number2,Result;
    printf("Enter Operation : ");
    scanf("%c",&Op);
    printf("Enter Number 1 : ");
    scanf("%d",&Number1);
    printf("Enter Number 2 : ");
    scanf("%d",&Number2);
    switch(Op){

 case '+':
Result= Number1 + Number2 ;
break;
 case '-':
     Result= Number1 - Number2 ;
break;

 case '*':
     Result= Number1 * Number2 ;
break;

 case '/':
          if(Number1 != 0 && Number2 != 0 ){


     Result= Number1 / Number2 ;
          }else{
          printf("\nCant Dvidead zero");
          }
          break;
 default:
    printf("\nWrong Operation ");

    }
     if(Number1 != 0 && Number2 != 0 ){
    printf("\nResult = %d",Result);
     }else{

     printf("\nCant Dvidead zero");
     }
}
