#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 ,num2 ,num3;
    printf("Number1 plz :");
    scanf("%d",&num1);
        printf("Number2 plz :");
    scanf("%d",&num2);
        printf("Number3 plz :");
    scanf("%d",&num3);
    if(num1 > num2){
        if (num1>num3){
                printf("Number1 is the greater ");

        }
        else{
                            printf("Number3 is the greater ");

        }
    }
    else if (num2 > num3){
                        printf("Number2 is the greater ");

    }
    else{
                                    printf("Number3 is the greater ");

    }
}
