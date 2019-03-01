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

void main()
{
	int num(k);
	int n,i,m,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++) 
	{
		scanf("%d",&k);
		m=num(k);
		printf("%d\n",m);
	}
}

int num(k)
{
	int p,a=0,b=1,c=1;
	for(p=1;p<=k;p++)
	{
		a=b;
		b=c;
		c=a+b;
	}
	return (a);
}