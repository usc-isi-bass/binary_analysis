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


int function(int n,int a)
{
	int kind=0;
	int i;
	if(n==1)
	return 1;
	for(i=a;i<=n;i++)
	{
		if(n%i==0)
		{
			if(n/i<i&&i!=n);
			else
			{
				kind=kind+function(n/i,i);
			}
		}
	}
	return kind;
}

int main()
{
	int m,n,i,sum;
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>n;
		sum=function(n,2);
		cout<<sum<<endl;
	}
	return 0;
}