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
	int n,i,j,k=0,m=0,a[1000][1000],flag=0,number;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j][i]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
            if(a[j][i]==0)
			{
				k++;
				flag=1;
			}
			if(flag==1)
			{
				if(a[j][i]==255)
				{
					break;
				}
			}
		}
	}
	flag=0;
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
            if(a[j][i]==0)
			{
				m++;
				flag=1;
			}
			if(flag==1)
			{
				if(a[j][i]==255)
				{
					break;
				}
			}
		}
	}
	number=(k-2)*(m-2);
	printf("%d\n",number);
	return 0;
}
