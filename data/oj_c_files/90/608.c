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
	int func1(int m,int n);  
	int t,m,n,result,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&m);
		scanf("%d",&n);
		result=func1(m,n);
		printf("%d\n",result);
	}
	return 0;
}


int func1(int m,int n)
{
	int result1;
	if(m>=n)
	{
		if(n==1)	//????????????????????
		{
			result1=1;
		}
		else if(n>=2)	
		{
			result1=func1(m,n-1)+func1(m-n,n);
		}
	}
	if(m<n)
	{
		if(n==1)	//????????????????????
		{
			result1=1;
		}
		else if(n>=2)
		{
			result1=func1(m,n-1);
		}
	}
	return result1;
}