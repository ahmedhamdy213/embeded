#include <stdio.h>
#include <stdlib.h>


void main() {
    int number, position;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter the bit position to check (0-indexed): ");
    scanf("%d", &position);

    int mask = 1 << position;
    int result = (number & mask) != 0;

    printf("The %dth bit is %sset.\n", position, result ? "" : "not ");

}
