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
{int n,k,i,j,a[1009],t,l;
scanf("%d%d",&n,&k);t=0;l=0;
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{
	for(j=i+1;j<=n;j++)
{
		if(k==a[i]+a[j])
{
			l=l+1;
	
		}
else
t=t+1;
}
}
if(t==n*(n-1)/2)
printf("no");
else if(l>=1)
printf("yes");
}
