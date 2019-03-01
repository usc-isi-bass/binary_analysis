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

int f(int a,int b);

int main()
{
	int n,c[100],i,a,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&c[i]);
	}

	for(i=1;i<=n;i++)
	{
		a=c[i];
		sum=f(a,2);
		printf("%d\n",sum);
	}
	return 0;
}


int f(int a,int b)
{
	int sum=1;
	int i;
	if(a<b)
		return 0;
	for(i=b;i<a;i++)
	{
		if(a%i!=0)
			continue;
		else
			sum=sum+f(a/i,i);
	}
	return sum;
}





