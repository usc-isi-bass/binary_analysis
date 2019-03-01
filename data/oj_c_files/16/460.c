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
int a,n;
scanf("%d",&n);
if(n<10)
printf("%d",n);
else if(n==10)
printf("1");
else
{do
{a=n%10;
printf("%d",a);
n=(n-a)/10;
}
while(n>=10);
a=n;
printf("%d",a);
}
return 0;
}