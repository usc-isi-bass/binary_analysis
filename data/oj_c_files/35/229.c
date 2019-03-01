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
	int a[8][8]={0},h,l,i,j,k,m=0,n[8]={0};
	scanf("%d,%d",&h,&l);
	for(i=0;i<h;i++)
		for(j=0;j<l;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<h;i++)
	{
		int max=0;
		for(j=0;j<l;j++)
			if(a[i][j]>max)
			{
				max=a[i][j];
				n[i]=j;
			}
	}
	k=0;
	for(i=0;i<h;i++)
	{
		for(j=0;j<h;j++)
			if(a[i][n[i]]>=a[j][n[i]])
				m++;
		if(m==1)
		{
			printf("%d+%d\n",i,n[i]);
			k++;
		}
	}
	if(k==0)
		printf("No\n");
}
