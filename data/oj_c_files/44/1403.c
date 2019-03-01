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
	int fan(int x);
	int i,a;
	for(i=1;i<=6;i++)
	{
		scanf("%d",&a);
		printf("%d\n",fan(a));
	}
}

int fan(int x)
{
	int i=0,s=100000,n[5],f=0,m=0,k;
	if(x>0)
	{
		for(i=0;i<5;i++)
		{
			s=s/10;
			if((x/s)!=0)
			{
				k=i;
				break;
			}
			else continue;
		}
		

		for(i=k;i<5;i++)
		{
			n[i-k]=x/s;
			if((x/s)!=0) x=x%s;
			s=s/10;
		}
		
		s=1;
		
		for(i=0;i<5-k;i++)
		{
			f=f+n[i]*s;
			s=s*10;
		}

		return(f);
	}

	else if(x<0)
	{
		x=-x;
		
		for(i=0;i<5;i++)
		{
			s=s/10;
			if((x/s)!=0)
			{
				k=i;
				break;
			}
			else continue;
		}
		

		for(i=k;i<5;i++)
		{
			n[i-k]=x/s;
			if((x/s)!=0) x=x%s;
			s=s/10;
		}
		
		s=1;
		
		for(i=0;i<5-k;i++)
		{
			f=f+n[i]*s;
			s=s*10;
		}

		return(-f);
	}

	else return(0);
}