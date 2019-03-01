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

int main ( )
{
	int n,i,k;int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=n-1;i>0;i--)
	{
		if(a[i]>a[i-1])
		{
			k=a[i];a[i]=a[i-1];a[i-1]=k;
		}
	}
	for(i=n-1;i>1;i--)
	{
		if(a[i]>a[i-1])
		{
			k=a[i];a[i]=a[i-1];a[i-1]=k;
		}
	}
	printf("%d\n%d\n",a[0],a[1]);
	return 0;
}