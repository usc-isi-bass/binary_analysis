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
	int a[6][6];
	int i,j,flag,l=0,p,k=0;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(a[i][l]<a[i][j])
				l=j;
		}
		for(p=0,flag=0;p<=4;p++)
		{
			if(p==i)
				continue;
			if(a[i][l]>a[p][l])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			k=1;
			printf("%d %d %d",i+1,l+1,a[i][l]);
		}
	}
	if(flag==1&&k==0)
		printf("not found");
	return 0;
}
