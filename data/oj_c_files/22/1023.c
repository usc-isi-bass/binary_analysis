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
	int a[300]={0},i,n=0;
	int max1=0,max2=0;
	char c;
	for(i=0;i<300;i++,n++)
	{
		scanf("%d",&a[i]);
		scanf("%c",&c);
		if(c!=',') break;
	}
	for(i=0;i<n+1;i++)
	{
		if(a[i]>max1) max1=a[i];
	}
	for(i=0;i<n+1;i++)
	{
		if(max1==a[i]) a[i]=-1;
	}
	for(i=0;i<n+1;i++)
	{
		if(a[i]>max2) max2=a[i];
	}
	if(n==0)
	{
		printf("No\n");
	}
	else if(max2==0)
	{
		printf("No\n");
	}
	else
	{
		printf("%d\n",max2);
	}
	return 0;
}