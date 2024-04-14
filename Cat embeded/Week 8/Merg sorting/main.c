#include<stdio.h>

 void main()
 {
   int FA[]={1,4,6,9,15};
   int SA[]={2,5,8,10};
   int FinalRes[100];
   int NF =5 ,NS =4 ;
   int i=0,j=0,k=0;
   while (i < NF && j < NS)
   {
    if (FA[i]<=SA[j])
    {
     FinalRes[k] = FA[i];
     i++;
    }
    else
    {
     FinalRes[k] = SA[j];
     j++;
    }
    k++;
   }
   while (i<NF)
   {
    FA[i] = FinalRes[k];
    i++;
    k++;
   }
   while (i<NS)
   {
    SA[j] = FinalRes[k];
    j++;
    k++;
   }
   int PF;
   while  (PF <10)
   {
      printf("The array after Sorting ");

    printf(" %d ",FinalRes[PF]);
    PF++;

    
   }
   
   
   

 }