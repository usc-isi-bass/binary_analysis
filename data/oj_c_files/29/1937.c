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

int fibonacci(int n)
{
	int a;
	if (n==1||n==2)
		a=1;
	else a=fibonacci(n-1)+fibonacci(n-2);
	return a;
}
int main()
{
	int m,i,j;
	scanf("%d",&m);
	for (i=1;i<=m;i++)
	{
		int n;
		double fenzi,fenmu,result,sum=0.0;
		scanf("%d",&n);
		for (j=1;j<=n;j++)
		{
			fenzi=fibonacci(j+2);
			fenmu=fibonacci(j+1);
			result=fenzi/fenmu;
			sum=sum+result;
		}
		printf("%.3f\n",sum);
	}
	return 0;
}