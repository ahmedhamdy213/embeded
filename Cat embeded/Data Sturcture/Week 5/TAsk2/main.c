#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"Stack/Stack.h"
#include"queue/queue.h"
double Evalatepostfix(char e[])
{
    int i ;
    char c;
    double op1 ,op2 ,val;
    Stack S;
    CreateStack (&S);
    for (i=0 ; (c =e[i])!= '\0'; i++)
    {
        if (IsDigits(c))
        {
            Push((double)(c-'\0'),&S);
        }else
        {
         Pop(&op1,&S);
         Pop(&op2,&S);
         val=Oper(c,op1,op2);
         Push(&val,&S);
        }
        Pop(&val,&S);
        return val;
        
    }
    

}
int IsDigits(char c)
{
    return(c>='0' && c<='9');
}

void main()
{
 char e[]="12+4*5";
double x;
x = Evalatepostfix(e);
printf("\n \n %s",x);
getch(); 


}