#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    for (; number; sum += number % 10, number /= 10);

    printf("Sum of digits = %d\n", sum);

}
