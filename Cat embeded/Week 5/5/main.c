#include <stdio.h>
#include <stdlib.h>

void main()
{
   int x=12,y=24,z=48;
   int *px,*py,*pz;
   px =&x;
   py =&y;
   pz =&z;
   printf("variable = %d %d %d   pointers = %d %d %d ",x,y,z,*px,*py,*pz);
   printf("\nswapping pointers ");
   pz=px;
   px=py;
   py=pz;
   printf("\nvariable = %d %d %d   pointers = %d %d %d ",x,y,z,*px,*py,*pz);//the varibale still constant beacuse the pointer changer his adress to another pointer not change in the adrees if i put * then the varable change


}
