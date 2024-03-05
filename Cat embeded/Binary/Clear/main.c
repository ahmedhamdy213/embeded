#include <stdio.h>
#include <stdlib.h>

void main()
{
    int X =3;
    X &= ~(1<<1);
    printf("%d",X);
}
