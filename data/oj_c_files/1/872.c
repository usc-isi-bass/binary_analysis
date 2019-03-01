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


int chu(int i,int n);
int main()
{
	int n,m,i,j;
	int sum[100];
	scanf("%d",&n);
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d",&m);
		sum[i]=0;
		for(j=2;j<=sqrt(m);j++)
		{
			if(m%j==0)
			{
				sum[i]+=chu(j,m/j);
			}
		}
		
		
	}
	for(i=0;i<=(n-1);i++)
	{
		printf("%d\n",sum[i]+1);
	}
}
int chu(int i,int n)
{
	int j,m,t;
	t=1;
	m=n;
	for(j=i;j<=sqrt(m);j++)
	{
		if(m%j==0)
		{
		
          t+=chu(j,(m/j));
		}
	}
	return t;
}