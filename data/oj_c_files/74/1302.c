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
	int rev(long);
	int prime(long);
	long m,n,i;
	int first=1;
	scanf("%ld%ld",&m,&n);
    for (i=m;i<n+1;i++)
		if (rev(i) && prime(i))
		{
			if (!first) printf(",");
			printf("%ld",i);
			if (first) first=0;
		}
	if (first) printf("no");
	return 0;
}

int rev(long n)
{
	long a[10],i=0,j,flag=1;
	while (n>0)
	{
		a[i++]=n%10;
		n=n/10;
	}
//	for (j=0;j<i;j++) printf("%d",a[j]);
	for (j=0;j<i;j++)
		if (a[j]!=a[i-j-1]) 
		{
			flag=0;
			break;
		}
//	printf("%d\n",flag);
	if (flag) return 1;
	return 0;
}

int prime(long n)
{
	long x,h=sqrt(n),flag=1;
//	printf("%ld",h);
	for (x=2;x<=h;x++)
	{
//	printf("%ld",x);
		
		if (n%x==0)
		{
			flag=0;
			break;
		}
	}
	if (flag) return 1;
	return 0;
}