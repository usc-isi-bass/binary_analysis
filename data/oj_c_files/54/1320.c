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
	int fun(int s,int n,int k);
	int n,k,i,s,j,judge;
	scanf("%d%d",&n,&k);
	for(i=1;;i++)
	{
		s=i;
		judge=1;
		for(j=1;j<=n;j++)
		{
			s=fun(s,n,k);
			if(s==0)
			{
				judge=0;
				break;
			}
		}
		if(judge==1)break;
	}
	printf("%d",i);
	return 0;
}
int fun(int s,int n,int k)
{
	if(s%n!=k)s=0;
	else
	{
		s=(s-k)/n*(n-1);
	}
	return s;
}