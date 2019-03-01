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
	int a[100001]={0},max1=0,max2=0,n,i,p;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(max1<a[i])
		{
			max1=a[i];
			p=i;
		}
	}
	a[p]=0;
	for(i=1;i<=n;i++)
	{
		if(max2<a[i])
			max2=a[i];
	}
	printf("%d\n%d\n",max1,max2);
	return 0;
}
