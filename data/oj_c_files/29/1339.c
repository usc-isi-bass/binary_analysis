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
int m;
for (scanf("%d",&m);m--;)
{
int n;
scanf("%d",&n);
double tot=0;
double a,b;
a=1;b=2;
while (n--)
{
tot+=b/a;
int c=a+b;a=b;b=c;
}
printf("%.3f\n",tot);
}
return 0;
}