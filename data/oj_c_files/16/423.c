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
int a,r;
scanf("%d",&a);
r=a%10;
do
{
printf("%d",r);
a=a-r;
a=a/10;
r=a%10;
}
while(a>=1);
return 0;
}