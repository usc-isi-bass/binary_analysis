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

int a(int m,int n);
main()
{
	
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		int p,q;
		scanf("%d%d",&p,&q);
		printf("%d\n",a(p,q));
	}
	return 0;
}
int a(int m,int n)
{
	if(m<n)
	{
		return a(m,n-1);
	}
	else if(n==m&&n!=1)
	{
		return a(m,n-1)+1;
	}
	else 
	{if(n==1)
	{
		return 1;
	}
	else
	{
		return a(m-n,n)+a(m,n-1);
	}
	}
}
