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


void go(int a)
{
	int b[100],i,c;
	if(a==0)printf("0");
	if(a>0)
	{
		c=log10(a);
		for(i=c;i>=0;i--)
		{
			b[i]=a/(pow(10,i));
			a=a-b[i]*pow(10,i);
		}
		for(i=0;i<=c;i++)
		{
			a=a+b[c-i]*pow(10,i);
		}
		printf("%d",a);
	}
	if(a<0)
	{
		a=(-a);
		c=log10(a);
		for(i=c;i>=0;i--)
		{
			b[i]=a/(pow(10,i));
			a=a-b[i]*pow(10,i);
		}
		
		for(i=0;i<=c;i++)
		{
			a=a+b[c-i]*pow(10,i);
		}
		printf("%d",-a);
	}
	printf("\n");
	
}

int main()
{
	int a[6],i;
	for(i=0;i<6;i++)
	{scanf("%d",&a[i]);}
	for(i=0;i<6;i++)
	{
		go(a[i]);
	}
	return 0;
}


	



	
