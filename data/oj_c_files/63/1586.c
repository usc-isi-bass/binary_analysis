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
	int a[500][500],b[500][500],c[500][500];
	int h,j,k,x1,y1,x2,y2;
	
	scanf("%d %d",&x1,&y1);
	for(h=0;h<x1;h++)
	{
		for(j=0;j<y1;j++)
		scanf("%d",&a[h][j]);
	}
	scanf("%d %d",&x2,&y2);
	for(h=0;h<x2;h++)
	{
		for(j=0;j<y2;j++)
		scanf("%d",&b[h][j]);
	}
	for(h=0;h<x1;h++)
	{
		for(j=0;j<y2;j++)
		{
			c[h][j]=0;
			for(k=0;k<y1;k++)
			{c[h][j]=c[h][j]+a[h][k]*b[k][j];}
			if(j==y2-1)
			printf("%d\n",c[h][j]);
			else
			printf("%d ",c[h][j]);
		}
	}
} 