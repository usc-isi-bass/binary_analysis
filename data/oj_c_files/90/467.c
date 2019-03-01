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

int apple(int m,int n);
int main()
{
	int num,i,p,q;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		scanf("%d%d",&p,&q);
		printf("%d\n",apple(p,q));
	}
	return 0;
}

int apple(int m,int n)
{
	int sum=0,j;
	if(m==0) return 1;
	if(m<n) return apple(m,m);
	if(m>=n)
	{
		for(j=n;j>0;j--)
			sum+=apple(m-j,j);
		return sum;
	}
}