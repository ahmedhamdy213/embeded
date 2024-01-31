#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int i =0;
    int z=4;
    printf("hi,plz But The User Id : ");
    scanf("%d",&a);
    for (i;i<3;i++){

        if(a==1234){

            break;
        }
        else{
                --z;

            printf("Plz Try Again You Have %d Try : ",z);
             scanf("%d",&a);
        }


    }
      if(a==1234){

            printf("welcome to your acc");
        }
        else{
                printf("you cant accses in this acc");
        }
}
