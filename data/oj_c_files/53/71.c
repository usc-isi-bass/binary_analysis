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

void main()
{
int i,j,n,a[300],sum=0,b[300]={0},s;
scanf("%d",&n);
for (i=0;i<n;i++)scanf("%d",&a[i]);
for (i=0;i<n;i++)
{
s=1;
for(j=0;j<=sum;j++)
{
	if (b[j]==a[i])
	{
		s=0;
		break;
	}
}
if(s) 
{b[sum]=a[i];
sum++;
}
}

for(j=0;j<sum;j++)
{
	if(j!=sum-1)printf("%d,",b[j]);
    else printf("%d",b[j]);
}
}