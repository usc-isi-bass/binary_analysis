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
	int n,a[100][2000],i,j,h,s=0,l[100],S;
		scanf("%d",&n);
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{scanf("%d",&a[i][j]);}
}
for(i=0;i<n;i++)
{l[i]=0;
	for(j=0;j<n;j++)
{
		if(a[i][j]==0)
	{l[i]++;}
}}
for(i=0;i<n;i++)
{if(l[i]!=0)
{s++;}
if(l[i]!=0&&l[i]!=2)
{h=l[i];}
}
S=s*h-2*h-2*s+4;
printf("%d",S);

return 0;
}
