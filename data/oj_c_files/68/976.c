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
{int i,b;
b=sqrt(a);
if(a%2==0)
return 0;
for (i=3;i<=sqrt(a);i+=2)
{if(a%i==0)
return 0;}
return 1;
}
int main()
{int n,j,k;
scanf("%d",&n);
for(j=6;j<=n;j+=2)
{
	for(k=3;k<=j;k++)
if(f(k)==1&&f(j-k)==1)
{printf("%d=%d+%d\n",j,k,j-k);
break;}
}
return 0;
}