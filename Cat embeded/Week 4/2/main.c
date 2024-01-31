#include <stdio.h>
#include <limits.h>



int main()
{
    int arr[5], i;
    int max1, max2;




    for(i=0; i<5; i++)
    {
        printf("Enter elements in the array: ");
        scanf("%d", &arr[i]);
    }





    for(i=0; i<5; i++)
    {
        if(arr[i] > max1)
        {

            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {

            max2 = arr[i];
        }
    }
    printf("The Array \n");
     for(i=0;i<5;++i){

        printf("%d ",arr[i]);
     }

    printf("\nSecond largest = %d", max2);

    return 0;
}
