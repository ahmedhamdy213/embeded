#include <stdio.h>
#include <stdlib.h>
#define N 10
void main()
{
   int arr [N];
   int i,j,a;
   for  (i=0;i<10;++i){
    printf("Enter Number :");
    scanf("%d",&arr[i]);
   }
   for(i=0;i=10;++i){

    for(j=i+1;j<10;++j){
        if(arr[i]<arr[j]){
            a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
        }
    }
   }
   for(i=0;i<10;++i){
    printf("%d",arr[i]);
   }
}
