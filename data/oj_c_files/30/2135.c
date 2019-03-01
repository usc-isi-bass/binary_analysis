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


int yu7wuguan(int n)
{
	if(n%7==0)
	{
		return 0;
	}
	for(int i=n;i>0;i/=10)
	{
		if(i%10==7)
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	int n,sum=0,y=0,i=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		y=0;
		if(yu7wuguan(i))
		{
			y=i*i;
			sum+=y;
		}
		else
		{
			continue;
		}
	}
	printf("%d",sum);
	return 0;
}