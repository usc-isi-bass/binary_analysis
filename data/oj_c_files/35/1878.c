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

int a[10][10],m,n;
int maxh(int h)
{
	int i,max,r;
	max=a[h][0];
	r=0;
	for(i=1;i<n;i++)
	{
		if(max<a[h][i])
		{max=a[h][i];r=i;}
	}	
	return(r);
}
int min(int x)
{
	int i,r,min;
	min=a[0][x];
	r=0;
	for(i=1;i<m;i++)
	{
		if(min>a[i][x])
		{min=a[i][x];r=i;}
	}
	return(r);
}
void main()
{
	int h,l,x,y;
	scanf("%d,%d",&m,&n);
	for(h=0;h<m;h++)
	{
		for(l=0;l<n;l++)
		{
			scanf("%d",&a[h][l]);
		}
	}
	for(h=0;h<m;h++)
	{
		x=maxh(h);
		y=min(x);

		if(h==y)
		{
			printf("%d+%d",h,x);
			break;
		}
		
		else if(h==m-1)
			printf("No");
	}
}