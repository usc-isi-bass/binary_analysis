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
	int apple(int m,int n);
	int t,i,m,n;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d",&m,&n);
		printf("%d\n",apple(m,n));
	}
	return 0;
}
int apple(int m,int n)
{
	int k;
	if(m>=n&&n>1)
		k=apple(m,n-1)+apple(m-n,n);
	else if(n>1)
	{
		k=apple(m,n-1);
	}
	else
		k=1;
	return (k);
}