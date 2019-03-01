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

int ways(int m,int n)
{
	int c=0;
	if(m>=0)
	{
		if(m==1||n==1||m==0)
		{
			c=1;
		}
		else
		{
			c=ways(m,n-1)+ways(m-n,n);
		}
	}
	else
	{
		return 0;
	}
	return c;
}


int main()
{
	int t,i=1,m,n;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>m>>n;
		cout<<ways(m,n)<<endl;
	}
	return 0;
}