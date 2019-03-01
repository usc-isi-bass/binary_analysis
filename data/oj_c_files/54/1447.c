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

int t=1;
int f(int n,int k,int m)
{
	int num;
	if(m==0)
	{
		return t;
	}
	else 
	{
		while(1)
		{
			num=(n*f(n,k,m-1))/(n-1)+k;
			if(f(n,k,m-1)%(n-1)==0)
			{
				return num;
				break;
			}
			else
				t++;
		}
	}
}
	
int main()
{
	int n,k;
	cin>>n>>k;
	int monkey;
	monkey=n;
	cout<<f(n,k,monkey)<<endl;
	return 0;
}