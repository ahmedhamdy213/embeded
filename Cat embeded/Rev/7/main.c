#include <stdio.h>
#include <stdlib.h>

void main()
{
    char s[]="Hello world";
    char c[100];
    int i =0;
    while(s[i] !='\0'){
        c[i]=s[i];
        i++;
    }
    c[i]='\0';
    printf("\nOriginal = %s ",s);
        printf("\nCopy = %s ",c);



}
