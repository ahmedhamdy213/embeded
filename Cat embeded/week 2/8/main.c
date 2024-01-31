#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,z,i;
    printf("enter num : ");
    scanf("%d",&c);
    for( i  ; i<=9 ; i++){
            z=c*i;
        printf("%d * %d = %d \n",c,i,z);
    }

}
