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

int zui(int k,int m,int a[])
{
	int s=1,i=m+1,max=0;
	if(m==k) s=1;
	else
	{
	for(i=m+1;i<=k;i++)
	{
		if(a[k-m]<=a[k-i])
		{if(max<zui(k,i,a))
		{
			max=zui(k,i,a);
		}
		}
	}
	s=s+max;
	}
	return s;
}
int main()
{
	int i,k,a[25],max=0,s;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);       
	}
    for(i=1;i<k;i++)
	{
		s=zui(k,i,a);
		if(s>max) max=s;
	}
	printf("%d",max);
	return 0;
}