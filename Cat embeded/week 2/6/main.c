#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("what is the resault of 3 *4 == ");
    scanf("%d",&x);
    for(;;){
        if (x!=12){
                printf("try again= ");
                scanf("%d",&x);

        }
        else if(x== 12){
            printf("thanks  ");
            break;

        }
    }
}
