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
	int m,n,a,i,j,b,c,d,l=0,k,e=1;
	scanf("%d %d",&m,&n);
	for(a=m;a<=n;a++)
	{
		for(i=2;i<a;i++)
			if(a%i==0)
				break;
		if(i>=a)
		{
			b=a;
			j=0;
			while(b!=0)
			{
				b=b/10;
				j++;
			}
			c=a;
			d=0;
			for(k=j;k>=1;k--)
			{
				d=d+c%10*pow(10,k-1);
				c=c/10;
			}
			if(d==a)
		    l++;
		}

	}
	if(l==0)
				printf("no\n");
	else
	{for(a=m;a<=n;a++)
	{
		for(i=2;i<a;i++)
			if(a%i==0)
				break;
		if(i>=a)
		{
			b=a;
			j=0;
			while(b!=0)
			{
				b=b/10;
				j++;
			}
			c=a;
			d=0;
			for(k=j;k>=1;k--)
			{
				d=d+c%10*pow(10,k-1);
				c=c/10;
			}
			if(d==a)
			{	if(e<l)
			{printf("%d,",a);
				e++;}
			else printf("%d",a);}
		}
	}	
	}
}
