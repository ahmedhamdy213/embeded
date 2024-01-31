#include <stdio.h>
#include <stdlib.h>

void  main()
{
    int i,j;
    int Sum=0;
    int arr[5][5] ={{8,3,9,0,10},{3,5,17,1,1}, {2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
    //Row sum
    printf("Row total :");
    for(i=0;i<5;i++){

        for(j=0;j<5;j++){

            Sum+= arr[i][j];
        }
        printf("%d ",Sum);
        Sum =0;
    }
    //Couloum sum
    printf("\nCol total :");
    for(i=0;i<5;i++){

        for(j=0;j<5;j++){

            Sum+= arr[j][i];
        }
        printf("%d ",Sum);
        Sum =0;
    }
}
