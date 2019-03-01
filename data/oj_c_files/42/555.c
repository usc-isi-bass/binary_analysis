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
	int n,a[100000],i,k,count=0;
	int *p;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	for(p=a,i=0;i<=n-1;i++)                                                                                                                                                                                                                                                       
	{
		if(a[i]!=k)
		{
			*p=a[i];
			p++;
		}
		else 
		{count++;}
	}
	for(p=a;p<=(a+n-1-count);p++)
	{
		if(p==a)printf("%d",*p);
		else printf(" %d",*p);
	}
}