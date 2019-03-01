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

void main ()
{
	int a,b,i,j,hang,h,z=0,min,m[10][10];
	scanf("%d,%d",&a,&b);
	//printf("\n");
	for(i=0;i<a;i++)
		for(j=0;j<b;j++)
			scanf("%d",&m[i][j]);
	for(j=0;j<b;j++)
	{
		z=0;
		min=m[0][j];
		for(i=0;i<a;i++)
		{
			if(m[i][j]<=min){min=m[i][j];hang=i;}
		}
	    for(h=0;h<b;h++)
		{
			if(m[hang][h]>min)
			{
				z++;
			}
		}
		if(z==0)
		{
			printf("%d+%d",hang,j);
			goto loop;
		}
		if(z!=0)continue;
	}
	printf("No");
    loop:printf("\n");
}