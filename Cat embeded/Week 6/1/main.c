#include <stdio.h>
#include <stdlib.h>

void main()
{
    char s[100];
    printf("Enter String In Lower : ");
    gets(s);
    int i=0;
    while(s[i]!= '\0'){
            if (s[i]>='a' && s[i] <= 'z' ){
        s[i]=s[i]-32; // the upper number in A to Z in AACII =65 to 90 , and lower is 97 to 122
            }
    i++;
    }
    printf("The String in upper : %s" ,s);
}
