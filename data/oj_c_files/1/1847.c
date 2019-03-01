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


int f2(int i,int a)
{
	int c,s=0;
	for(i;i<=a/2;i++)
	{
		if(a%i==0)
		{
			c=a/i;
			if(c>=i)
			{
				s=s+f2(i,c);
			}
		}
		

	}
	s=s+1;
	return s;
}

int f(int a)
{
	int s=0;
	
	s=s+f2(2,a);
    return s;
}


int main()
{
	int n,i,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		b=f(a);
		printf("%d\n",b);

	}

	return 0;
}