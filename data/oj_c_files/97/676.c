#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
int n,a,b,c,d,e;
scanf("%d",&n);
a=n%100;
b=a%50;
c=b%20;
d=c%10;
e=d%5;
printf("%d\n%d\n%d\n%d\n%d\n%d\n",n/100,a/50,b/20,c/10,d/5,e);

return 0;
 }
