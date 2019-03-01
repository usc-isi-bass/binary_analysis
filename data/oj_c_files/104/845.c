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
	int f1(int n,int m);
	int m,n;
	scanf("%d%d",&n,&m);
	printf("%d\n",f1(n,m));
}

int f1(int n,int m)
{
	if(n==m)
		return n;
	else if(n>m)
	{
		if(n%2==0)
			return f1(n/2,m);
		else
			return f1((n-1)/2,m);
	}
	else
	{
		if(m%2==0)
			return f1(n,m/2);
		else
			return f1(n,(m-1)/2);
	}
}
