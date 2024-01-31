#include<stdio.h>
#include<stdlib.h>
void Fun (int arr1[], int arr_size)
{
  int i, j;
  printf("The repeating elements are: ");
  for(i = 0; i < arr_size; i++)
    for(j = i+1; j < arr_size; j++)
      if(arr1[i] == arr1[j])
        printf(" %d ", arr1[i]);
}

int main()
{
  int arr1[] = {1, 2, 2, 6, 4, 9, 9,10,10,98,435,64,98};
  int ctr = sizeof(arr1)/sizeof(arr1[0]);
  int i;
	printf("The given array is :  ");
	for(i = 0; i < ctr; i++)
	{
	printf("%d  ", arr1[i]);
    }
    printf("\n");

  Fun(arr1, ctr);
  return 0;
}
