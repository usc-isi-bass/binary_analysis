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

int sum=0;

void f(int x, int i)
{
	double m=sqrt(x);
	if(i<m)
	{
	if(x%i==0)
	{
		sum++;
		f(x/i,i);
	}
	f(x,i+1);
	}

	if(fabs(i-m)<0.00000001)
		sum++;



}


int main()
{
	int x,i,n;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{scanf("%d",&x);
	sum=0;
	f(x,2);

	printf("%d\n",sum+1);
	}
	return 0;

}
