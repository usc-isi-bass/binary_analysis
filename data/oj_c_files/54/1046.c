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
	int divide_apple(int n,int k);
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%d\n",divide_apple(n,k));
	return 0;
}
int divide_apple(int n,int k)
{
	int i,sum,m;
	for (sum=1;;sum++)
	{
	    m=sum;	
	    for (i=1;i<=n;i++)
		{
	        if (m%n==k)
				m=m-m/n-k;
			else
				break;
		}
        if (i>n&&m>=1)
		{
			return sum;
			break;
		}
	}
}