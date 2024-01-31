#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,s;
    printf("Enter your working hour =");
    scanf("%d",&h);
    if(h<=40)
    {
        s=h*50*.1;
    }
    else{
        s=h*50;
    }
    printf("your salary are= %d" ,s);
}
