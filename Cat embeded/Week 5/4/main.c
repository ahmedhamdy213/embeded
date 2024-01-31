#include <stdio.h>
#include <stdlib.h>
void bubble(int *a ,int N){
for(int i=0 ;i<N-1;i++){
        for(int j =0 ; j<N-i-1 ; j++){
            if(*(a+j) > *(a+j+1)){
                int H =*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=H;
            }

        }

}



}
void main()
{
  int N;

  printf("But The Array Length : ");
  scanf("%d",&N);
  int a [N];

    for(int i =0 ; i<N ; i++){
      printf("But The Array elemnt %d :",i+1);

    scanf("\n %d",&a[i]);

    }
    bubble(a,N);
    printf("the sorting is :");
    for(int i=0 ;i<N;i++){
        printf("%d  ",*(a+i));
    }


}
