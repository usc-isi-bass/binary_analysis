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
	int a[5000][2];
	int i,n,x,d,m,s;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i][0],&a[i][1]);
	}
	
		x=a[0][0];d=a[0][1];
		for(i=0;i<n;i++)
		{
			if(a[i][0]<x)
			{
				x=a[i][0];
			}
			if(a[i][1]>d)
			{
				d=a[i][1];
			}
		}
		int c[10000];
		for(i=x;i<d+1;i++)
		{
			c[i]=0;
		}
		for(i=0;i<n;i++)
		{
			m=a[i][0];
			s=a[i][1];
			for(m;m<=s-1;m++)
			{
				c[m]=1;
			}
			
			

		}
		for(i=x;i<d;i++)
		{
			if(c[i]==0)
			{printf("no");
			return 0;
			break;
			}

		}
		printf("%d %d",x,d);
		return 0;
}
