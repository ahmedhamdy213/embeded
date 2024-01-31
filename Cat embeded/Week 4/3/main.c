#include<stdio.h>
#include<stdlib.h>
#define N 7
int main()
{
  int arr1[N] ;

  int i,j;
	printf("enter number for array  :  ");
	for(i=0;i<N;i++){
        scanf("%d",&arr1[i]);
	}
	for(i = 0; i < N; i++)
	{
	    for (j=i+1;j<N;j++){
            if(arr1[i]==arr1[j]){
             printf("%d   ", arr1[i]);
            }

	    }

    }
    printf("\n");

  return 0;
}
