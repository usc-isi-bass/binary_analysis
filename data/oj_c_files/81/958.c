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

int hu(int a[][5], int m, int n);
void main()
{
	int h[5][5],p,q,i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&h[i][j]);
		}
	}
	scanf("%d%d",&p,&q);
	if(hu(h,p,q))
	{
		for(i=0;i<5;i++)
		{
			printf("%d %d %d %d %d\n",h[i][0],h[i][1],h[i][2],h[i][3],h[i][4]);
		}		
	    
	}
	else
		printf("error");
}
int hu(int a[][5], int m, int n)
{
	int temp=0,i;
	if(m>4||n>4)
		return 0;
	else
	{
		for(i=0;i<5;i++)
		{
			temp=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=temp;
		}
		
	    
		
		return 1;
	}
}
