#include <stdio.h>
#include <stdlib.h>
int Get_Max(int a,int b){

if(a<b){
    return b;

}
else {
    return a;
}
}
int main()
{
    int a,b,x;
    printf("But 2 Number \n");
scanf("%d",&a);
scanf("%d",&b);

     x = Get_Max(a,b);


    printf("The max =%d",x);
    return 0;
}
