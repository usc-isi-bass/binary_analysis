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
	int f(int m,int n);
	int m,n,k;
	scanf("%d%d",&n,&m);
	while (m!=0&&n!=0)
	{
	k=f(m,n);
	printf("%d\n",k);
	scanf("%d%d",&n,&m);
	}

}


int f(int m,int n)
{
	int k;
	if (n==1) k=1;
	else 
	{
		k=f(m,n-1);
		k=(k+m%n)%n;
		if (k==0) k+=n;
	}
	return k;
}