#include <stdio.h>
#include <stdlib.h>


void    main() {
    long long binaryNumber;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);

    int decimalNumber = 0, base = 1, remainder;

    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        decimalNumber += remainder * base;
        binaryNumber /= 10;
        base *= 2;
    }

    printf("Decimal equivalent: %d\n", decimalNumber);

}
