#include <stdio.h>
#include <stdlib.h>
void main()
{
    int S,EvenNumber =0,OddNumber=0;

    printf("Enter Array Size Plz : ");
    scanf("%d",&S);
    int arr[S];
    printf("\nEnter array Element %d :",S);
    for(int i =0 ;i<S;i++){
        scanf("%d",&arr[i]);
    }
     for(int i =0 ;i<S;i++){
        if(arr[i]%2 ==0){
            EvenNumber++;
        }else
        {
            OddNumber++;
        }
    }
     printf("\nNumber of Even Number : %d",EvenNumber);
          printf("\nNumber of Odd Number : %d",OddNumber);

}
