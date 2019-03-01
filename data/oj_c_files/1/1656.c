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

int meide(int x,int y)
{
	int sum=1,count=0,i;
	for(i=y;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			sum=sum+meide(x/i,i);
		}
	}
	return sum;
}
int main()
{
	int k,n,m;
	scanf("%d",&k);
	for(m=0;m<k;m++)
	{
		scanf("%d",&n);
		if(n>=3)
		{
		    printf("%d\n",meide(n,2));
		}
	    else
		{
		    printf("1\n");
		}
	}
	return 0;
}


