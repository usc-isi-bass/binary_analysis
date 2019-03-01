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


double f(int n)
{
	if(n==1)
		return 1;
	else if(n==2)
		return 2;
	else
		return f(n-1)+f(n-2);
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	int sz[1000];
 	for(i=0;i<n;i++)
		scanf("%d",&sz[i]);
	for(i=0;i<n;i++)
	{
		double sum=0;
		for(j=1;j<=sz[i];j++)
		{
			sum+=f(j+1)/f(j);
		}
		printf("%.3lf\n",sum);
	}
	return 0;
}
