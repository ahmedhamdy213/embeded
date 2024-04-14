#include <stdio.h>



void main()
{
    int A[]={15,8,3,4,7,2,1,96};
    int size    = sizeof(A)/sizeof(A[0]);
     for (int  i = 0; i <= size-1; i++)
     {
        int F=0;
        for (int k = 0; i <= size - i - 1 ; i++)
        {
                if (A[k]>A[k+1])
                {
                    //Swaping integers  
                    int SS =A[k];
                    A[k] =A[k+1];
                    A[k+1]=SS;
                    F=1;

                }
                
        }
        if (F==0)break;
      
     }
     
}