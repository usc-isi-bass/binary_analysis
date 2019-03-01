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
	int ys(int s,int p);
	int n,m,i,t;
	scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
        t=ys(m,2);
		printf("%d\n",t);
	}
    return 0;
}
int ys(int s,int p)
{
	int j,a=1,b;
	for(j=p;j*j<=s;j++)
	{
        if(s%j==0)
		{
			b=s/j;
			a=a+ys(b,j);
		}
	}
	return(a);
}