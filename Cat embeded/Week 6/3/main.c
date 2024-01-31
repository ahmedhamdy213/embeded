#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void main() {
    char s[100], rs[100];
    int length, i, j;

    printf("Enter a string: ");
    gets(s);

    length = strlen(s);

    j = 0;
    for (i = length - 1; i >= 0; i--) {
        rs[j] = s[i];
        j++;
    }
    rs[j] = '\0';
    printf("string: %s \n", s);
    printf("when reversed string: %s\n", rs);


}

