#include <stdio.h>
#include <stdlib.h>
 int max(int num1 ,int num2 ,int num3 ,int num4){
      int Max = (num1 > num2) ? ((num1 > num3) ? ((num1 > num4) ? num1 : num4) : ((num3 > num4) ? num3 : num4)) : ((num2 > num3) ? ((num2 > num4) ? num2 : num4) : ((num3 > num4) ? num3 : num4));
      return Max;
 }
  int min(int num1 ,int num2 ,int num3 ,int num4){
     int Min = (num1 < num2) ? ((num1 < num3) ? ((num1 < num4) ? num1 : num4) : ((num3 < num4) ? num3 : num4)) : ((num2 < num3) ? ((num2 < num4) ? num2 : num4) : ((num3 < num4) ? num3 : num4));
     return Min;
  }
void main() {
    int num1, num2, num3, num4;
    int Smaller , Bigger;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    Bigger = max(num1, num2, num3, num4);
    Smaller = min(num1, num2, num3, num4);
    printf("Maximum: %d\n", Bigger);
    printf("Minimum: %d\n", Smaller);

}
