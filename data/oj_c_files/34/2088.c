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


void cal(int *x);
int main()
{
	int n;
	scanf("%d",&n);
	do
	{
		if (n==1)
		{
			printf("End\n");
			return 0;
		}
		else
		{
			cal(&n);
		}
	}
	while(1);
}
void cal(int *x)
{
	int t;
	t=*x;
	if (t%2)
	{
		t=t*3+1;
		printf("%d*3+1=%d\n",(t-1)/3,t);
	}
	else
	{
		t/=2;
		printf("%d/2=%d\n",t*2,t);
	}
	*x=t;
}