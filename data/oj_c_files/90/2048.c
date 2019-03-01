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

int count(int m,int n,int max)
{
	int tp=0,st=0,i;
    if (n*max<m) return 0;
	if (m<=1) return 1;
	else if (n==1) return 1;
	else
	{if (fmod(m,n)==0) st=m/n;
	    else st=m/n+1;
	 if (max>=m) max=m;
	for (i=max;i>=st;i--)
		tp=tp+count(m-i,n-1,i);
	 return tp;
	}
}
int main()
{   int i;
	int total,m,n;
	scanf("%d",&total);
	for (i=1;i<=total;i++)
	{   scanf("%d %d",&m,&n);
		printf("%d\n",count(m,n,m));
	}
	return 7;
}
