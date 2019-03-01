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
	int h,l,x[8],X,Y,i,j,a[8][8],t[8]={0,0,0,0,0,0,0,0},n;
	scanf("%d,%d",&h,&l);
	for(i=0;i<h;i++)
	{
		for(j=0;j<l;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]>t[i])
			{
				t[i]=a[i][j];
				x[i]=j;
			}
		}
	}
	n=0;
	for(i=0;i<h;i++)
	{
		for(j=0;j<h;j++)
		{
			if(a[j][x[i]]<t[i])
			{
				goto MQ;
			}
		}
		X=i;
		Y=x[i];
		n--;
MQ:n++;
	}
	if(n==h)
		printf("No");
	if(n==(h-1))
		printf("%d+%d",X,Y);
	return 0;
}
