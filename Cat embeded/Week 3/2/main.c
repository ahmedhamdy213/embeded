#include <stdio.h>
#include <stdlib.h>
int Fun1 (int);
int Fun2 (int);
static int a =5;
static int b =10;
int c;

int main()
{

   int x =Fun1(x);
   int z = Fun2(z);
   printf("a=%d ,,, b=%d ",x,z);
}
int Fun1(int x)
{
    c=a;
    a=b;
    return a;

}
int Fun2(int z)
{

    b=c;
    return b;

}
