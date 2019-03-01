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

int f(int m,int min);
int main()
{
	int n,m,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		printf("%d\n",f(m,2));
	}
	return 0;
}
int f(int m,int min)
{
	int count=1,i;
	if(m==1)
		return 1;
	else if(m == 2)
		return 1;
	else
	{
		for(i=min;i<=sqrt(m);i++)
		{
			if(m%i==0)
			{
				count += f(m/i,i);
			}
		}
		return count;
	}
}