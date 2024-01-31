#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows;
    printf("enter row number = ");
    scanf("%d",&rows);
    for (int a =1;a<=rows;a++){
            for(int b =1 ;b<=(rows+1)-a;b++){
                printf(" ");
            }
            for(int k =1 ; k<=(2*a-1);k++){

                                printf("*");

            }
                        printf("\n");

    }
}
