#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    printf("what is your grade :");
    scanf("%d",&c);
    if (c>100){
        printf("wrong  degree");
    }
    else if(c>=85){
    printf("excellant ");

    }
    else if (c>=75){
            printf("good ");

    }
    else if (c>=65){
            printf("passs");

    }
    else if(65>c>=0){
            printf("fail");

    }
    else if (c<0){
                printf("wrong  degree");

    }

}
