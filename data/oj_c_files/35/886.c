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
	int h,l,i,j,k,p=0,n=0;
	int a[8][8],c[8];
	scanf("%d,%d",&h,&l);
	for(i=0;i<h;i++)
	{
		for(j=0;j<l;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<h;i++)
	{
		for(j=0;j<l;j++)
		{    
			p=0;
			for(k=0;k<l;k++)
			{
				if(a[i][j]>=a[i][k])
					p++;
			}
			if(p==l)
				c[i]=j;
		}
	}
	for(i=0;i<h;i++)
	{
		p=0;
		for(k=0;k<h;k++)
		{
			j=c[i];
			if(a[i][j]<=a[k][j])
				p++;
		}
		if(p==h)
		{
			printf("%d+%d\n",i,j);
			n++;
		}


	}
	if(n==0)
		printf("No");


}	