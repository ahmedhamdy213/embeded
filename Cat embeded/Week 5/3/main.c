#include <stdio.h>

void scalarMultiply(int *arr1, int *arr2, int *result, int size, int scalar) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] * arr2[i] * scalar;
    }
}

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int result[5];

    int scalar = 2;

    int size = sizeof(array1) / sizeof(array1[0]);

    scalarMultiply(array1, array2, result, size, scalar);

    printf("Resulting array after scalar multiplication:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    int sum =0 ,*p;
    for(p=&result[0];p<=&result[4];p++){
        sum +=*p;
    }
    printf("Resulting of the sum : %d",sum);

    return 0;
}
