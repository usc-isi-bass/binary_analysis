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

int n,k,m;
int asdf(int a)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(a%(n-1)!=0)
		return 0;
		a=a/(n-1)*n+k;
	}
	m=a;
	return 1;
}
int main ()
{ 
	int i;
	scanf("%d%d",&n,&k);
	for(i=n-1;;i+=(n-1))
	{
		m=0;
		if(asdf(i))
		{
			printf("%d",m);
			return 0;
		}
	}
}