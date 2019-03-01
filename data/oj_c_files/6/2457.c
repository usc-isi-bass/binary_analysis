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
	int a[10000],*p=a,*q=a,n,h,l,i,j,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=a;
		q=a;
		scanf("%d %d",&h,&l);
		
		for(j=1;j<=h*l;j++)
		{
			scanf("%d",p++);
		}
		if(h==1)
		{
			for(j=0;j<l;j++)
			{
				sum+=*(q+j);
			}
		}
		else if(l==1)
		{
			sum+=*q;
			sum+=*(q+h-1);
		}
		else
		{
			for(j=0;j<l;j++)
			{
				sum+=*(q+j);
				sum+=*(q+h*l-j-1);
			}
			for(j=1;j<=h-2;j++)
			{
				sum+=*(q+j*l);
				sum+=*(q+j*l+l-1);
			}
		
		}
			printf("%d\n",sum);
		sum=0;
	}
	
	
	
	
	
	
	return 0;
}


