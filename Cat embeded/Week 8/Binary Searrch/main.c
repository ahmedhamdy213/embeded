#include <stdio.h>
#include <stdlib.h>
int Binary_Search(int A[],int n ,int x)
{
   int low = 0;
   int high = n-1;
   while (low<=high)
   {
    int mid = (low + high) / 2;
   if(A[mid] == x)
   {

    return mid;
   }else if (A[mid]<x)
   {

    low = mid + 1;
   }else 
   {

    high = mid - 1;
   }

   }
    return -1;

}
int Binary_search_recerseve(int A[],int lower ,int higher ,int x)
{
  if ( lower > higher) return -1;
  int mid = (lower+higher)/2;
  if (x == A[mid]) return mid ;
  else if (x< A[mid]) 
  return Binary_search_recerseve(A,lower,mid-1,x);
  else 
  return Binary_search_recerseve(A,lower,mid+1,x);  
}
void main()
{
     int x ;
    int A[] ={1,2,4,6,7,9,11};
    int size = sizeof(A)/sizeof(A[0]);
    int lower,higher;
    lower = 0;
    higher = size -1;
  
    printf("But Number for binary ssearch :");
    scanf("%d",&x);
    int Temp1 = Binary_Search(A,size,x);
    int Temp2 = Binary_search_recerseve(A,lower,higher,x);

    if (Temp1 == -1 )
    {
        printf("Not In Array  \n");
    }else {
    
    printf ("Number %d is in array in index %d \n",x,Temp1);
    }
    if (Temp2 == -1 )
    {
        printf("Not In Array  ");
    }else {
    
    printf ("\nNumber %d is in array Recesery in index %d\n",x,Temp2);
    }
}