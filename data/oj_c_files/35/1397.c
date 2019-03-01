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
	int a[8][8],h,l,j,i,hm[8],lm[8],s=0;
	scanf("%d,%d",&h,&l);
	
	for(i=0;i<=h-1;i++)
	{
		for(j=0;j<=l-1;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<=7;i++)
	{
		hm[i]=0;
		lm[i]=a[0][i];
	}
	for(i=0;i<=h-1;i++)
	{
		for(j=0;j<=l-1;j++)
		{
			if(hm[i]<a[i][j])
				hm[i]=a[i][j];
		}
	}
	for(i=0;i<=l-1;i++)
	{
		for(j=0;j<=h-1;j++)
		{
			if(lm[i]>a[j][i])
				lm[i]=a[j][i];
		}
	}
	for(i=0;i<=h-1;i++)
	{
		for(j=0;j<=l-1;j++)
		{
			if(a[i][j]==hm[i]&&a[i][j]==lm[j])
			{
				printf("%d+%d",i,j);
				s+=1;
			}
		}
	}
	if(s==0)
		printf("No");
	return 0;
}
