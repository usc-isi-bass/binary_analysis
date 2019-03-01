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
	int i,n,e;
	int prime[N];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&prime[i]);
	}
	for(i=0;i<n;i++)
	{
		if(prime[i]>prime[i+1])
			e=prime[i],prime[i]=prime[i+1],prime[i+1]=e;
	}
	for(i=0;i<n;i++)
	{
		if(prime[i]>prime[i+1])
			e=prime[i],prime[i]=prime[i+1],prime[i+1]=e;
	}
	printf("%d\n",prime[n]);
	printf("%d\n",prime[n-1]);
	return 0;
}