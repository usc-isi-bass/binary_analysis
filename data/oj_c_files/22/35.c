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
	int i,j,k,a[300],flag=0,t;
	char c;
	for(i=0;;i++)
	{
		scanf("%d",&a[i]);
		c=getchar();
		if(c=='\n')break;
	}
	if(i==0)
		printf("No");
	else
	{
	for(j=0;j<i;j++)
	{
		for(k=0;k<i-j;k++)
		{
			if(a[k]<a[k+1])
			{
				t=a[k+1];
				a[k+1]=a[k];
				a[k]=t;
			}
		}
	}
	for(k=0;k<i;k++)
	{
		if(a[k]>a[k+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("No");
	else
		printf("%d",a[k+1]);
	}
}