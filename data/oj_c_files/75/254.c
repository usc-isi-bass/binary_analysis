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
	int a[1001],b[1001],n=0,m=0,k;
	char c;
	while(1)
	{
		n++;scanf("%d",&a[n]);scanf("%c",&c);
		if(c=='\n')
			break;
	}
	for(k=1;k<=n;k++)
	{
		if(k!=n)
			scanf("%d,",&b[k]);
		else
			scanf("%d",&b[k]);
	}
	printf("%d ",n);
	int i,j;
	int s[1001]={0},max=0;
	for(i=0;i<=999;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[j]<=i&&b[j]>i)
			s[i]++;
		}
		if(s[i]>max)
			max=s[i];
	}
	printf("%d",max);

}
