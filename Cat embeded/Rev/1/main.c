#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number,Bit,countZero = 0,CounrOne = 0;
    printf("Enter Number : ");
    scanf("%d",&number);
    while(number!=0){
        Bit = number %2;
        if(Bit ==0){
            countZero++;
        }else if( Bit ==1){
        CounrOne++;
        }
        number /=2;
    }
    printf(" The Number Of  Zero Bit = %d \n",countZero);
        printf(" The Number Of  One Bit = %d \n",CounrOne);

}
