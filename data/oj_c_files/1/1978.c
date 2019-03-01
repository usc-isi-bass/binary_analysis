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


int fg(int k,int m)
{
    int j,d=0;
	if (m==1)
	{
       d=1;
	}
   	for(j=k;j<=m;j++)
	{
		if (m%j==0)
			d=d+fg(j,m/j);
	}
	return(d);
}

int main()
{
	int n,i,a[40000],b[40000],s;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		b[i]=fg(2,a[i]);
		printf("%d\n",b[i]);
	}
	return 0;
}