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
	int shumu[1000][1000];
	int b,n,a,d,e,f;
	int m;
	int i;
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&shumu[m][i]);
		}
	}
	for(m=1;m<n-1;m++)
	{
		for(i=1;i<n-1;i++)
		{
			if(shumu[m][i]==0)
			{
				a=m;
				d=i;
			}
		}
	}
	for(m=n-1;m>0;m--)
	{
		for(i=n-1;i>0;i--)
		{
			if(shumu[m][i]==0)
			{
			e=m;
			f=i;
			}
		}
	}
	b=(e-a+1)*(f-d+1);
	printf("%d",b);
	return 0;
	
	
    
}