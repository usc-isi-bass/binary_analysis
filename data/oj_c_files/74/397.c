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
	int a,b,i,j=0,k,h,l=0,p,q,m=0,n;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		k=sqrt(i);
		for(h=2;h<=k;h++)
		{
			if(i%h==0)
				break;
		}
		
		if(h>=k+1&&i!=1)
		{
			p=i;
			while(p!=0)
			{
				q=p%10;
				j=j*10+q;
				p=p/10;
			}
			if(i==j)
			{
				printf("%d",j);
				m=1;
				n=j;
				break;
			}
			j=0;
		}
	}
	j=0;
	for(i=n+1;i<=b;i++)
	{
		k=sqrt(i);
		for(h=2;h<=k;h++)
		{
			if(i%h==0)
				break;
		}
		
		if(h>=k+1&&i!=1)
		{
			p=i;
			while(p!=0)
			{
				q=p%10;
				j=j*10+q;
				p=p/10;
			}
			if(i==j)
			{
				printf(",%d",j);
				m=1;
			}
			j=0;
		}
	}
	if(m==0)
	printf("no");
}
