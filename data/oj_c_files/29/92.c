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
	int i,n,s[500],a[100],j;
	i=0,j=0;
	scanf("%d",&n);
	s[0]=1,s[1]=2;
	for(i=2;i<500;i++)
	{
		s[i]=s[i-1]+s[i-2];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    double z[499],b;
	b=0;
	for(i=0;i<499;i++)
	{
		z[i]=1.0*s[i+1]/s[i];
	}
	for(i=0;i<n;i++)
	{
		b=0;
		for(j=0;j<a[i];j++)
		{
			b+=z[j];
		}
		printf("%.3lf\n",b);
	}
  return 0;
}
