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

int check(int q,int t,int b[])
{
	int i,j;
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			if(i==j)
				continue;
			if(b[i]+b[j]==q)
				return 1;
		}
	}
	return 0;
}
int main()
{
	int n,k,a[1000],i;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	if(check(k,n,a))
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}
