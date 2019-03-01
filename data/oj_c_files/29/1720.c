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
		return 2;
	else
		return 1+1/f(n-1);
}
int main()
{
    int m,n,i,j;
    scanf("%d",&m);
    for(i=0;i<m;i++)
	{
		double s=0.0;
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			s+=f(j);
		}
		printf("%.3lf\n",s);
	}
	return 0;
}