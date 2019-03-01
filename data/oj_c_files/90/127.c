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

int f(int m,int n)
{
	int a;
	if(m==0||n==1)
		return(1);
	else
	{
        if(m<n)
		{a=f(m,m);}
		else
		{a=f(m-n,n)+f(m,n-1);}
		return(a);
	}
}
void main()
{
	int t,m,n,y,i,j;
	scanf("%d",&t);
	for (i=1;i<=t;i++)
    {
		scanf("%d%d",&m,&n);
		printf("%d\n",f(m,n));
	}
}


