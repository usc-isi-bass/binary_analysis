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

int f(int a[],int n)
{
	int i=0,j;
	for(j=1;j<n;j++)
	{
		if(a[j]>a[i])
			i=j;
	}
	return i;
}
int main()
{
	int a[10][10],m,n,i,j,k,l,b;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	b=0;
	for(i=0;i<m;i++)
	{
		k=0;l=f(a[i],n);
		for(j=0;j<m;j++)
		{
			if(a[j][l]<a[i][l])
			{
				k=1;
				break;
			}
		}
		if(k==0)
		{
			b=1;
			printf("%d+%d",i,l);
			break;
		}
	}
	if(b==0)
		printf("No");
	return 0;
}