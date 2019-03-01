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
	int a[500],b[500],n,i,j,t,s;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	b[0]=a[0];t=1;
	for(i=1;i<=n;i++)
	{   s=0;
		scanf("%d",&a[i]);
		for(j=0;j<t;j++)
		{
			if(a[i]==b[j])
			{
				s=1;break;
			}
		}
		if(s==0)
		{
			b[t]=a[i];t=t+1;
		}
	}
	printf("%d",b[0]);
	for(i=1;i<t-1;i++)
	printf(",%d",b[i]);
} 