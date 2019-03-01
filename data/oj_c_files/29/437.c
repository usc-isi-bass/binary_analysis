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

int f(int a)
{if(a==1||a==2) return 1;
else return f(a-1)+f(a-2);
}
double xl(int b)
{
if(b==1) return 2;
else return (double)f(b+2)/f(b+1)+xl(b-1);
}
int main()
{
int n;
scanf("%d",&n);
int i,m;
for(i=0;i<n;i++)
{
scanf("%d",&m);
printf("%.3lf\n",xl(m));
}
return 0;
}


