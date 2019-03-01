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

int devide(int n,int k)
{
	int s,i;
	s=1;
	for(i=k;i<=sqrt(n*1.0);i++)
	{
		if(n%i==0)
		{
			s=s+devide(n/i,i);
		}
	}
	return s;
}
int main()
{
	int n,a[200],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i==0)printf("%d",devide(a[i],2));
		else printf("\n%d",devide(a[i],2));
	}
	return 0;
}