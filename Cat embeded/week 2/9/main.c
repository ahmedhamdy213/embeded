#include <stdio.h>
#include <stdlib.h>

int main (void) {
int n,m=1;
printf ("Enter number: ");
 scanf ("&d", &n);
 n=m;
if (n>=0) {
while (n) {
m=m*n;
m--;
}
printf ("%d" , m);
}
else { printf ("Invalid input");

}
return 0;
}
