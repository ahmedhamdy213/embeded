
#include <stdio.h>

void findMinMax(const int array[], int size, int *min, int *max) {
    *min = *max = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] < *min) {
            *min = array[i];
        } else if (array[i] > *max) {
            *max = array[i];
        }
    }
}

void main() {
    int myArray[] = {3, 7, 1, 9, 4, 6, 2, 8, 5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    int minValue, maxValue;

    findMinMax(myArray, arraySize, &minValue, &maxValue);

    printf("Minimum value: %d\n", minValue);
    printf("Maximum value: %d\n", maxValue);

}
