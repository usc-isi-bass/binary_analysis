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
	int n,i;
	int sa=0,sb=0;
	int a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		if(a+b==1)
		{
			if(a==0)
			{
				sa++;
			}else if(b==0)
			{
				sb++;
			}
		}else if(a+b==3)
		{
			if(a==1)
			{
				sa++;
			}else if(b==1)
			{
				sb++;
			}
		}else if(a+b==2)
		{
			if(a==2)
			{
				sa++;
			}else if(b==2)
			{
				sb++;
			}
		}
	}

	if(sa>sb)
	{
		printf("A\n");
	}else if(sa<sb)
	{
		printf("B\n");
	}else if(sa==sb)
	{
		printf("Tie\n");
	}
	
	return 0;
}
