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

void main()
{
	int a[300]={0},n,i=1,temp,m,j;
	scanf("%d",&a[0]);
	while(scanf(",%d",&m))
	{
		a[i]=m;
		i++;
	}
	n=i;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=1;i<n;i++)
	{
		if(a[i]!=a[0]&&a[i]!=0)
		{
			printf("%d",a[i]);
			break;
		}
	}
	if(i>=n)
		printf("No");
}
