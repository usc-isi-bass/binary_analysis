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

int num(int a,int b)
{
	int p;
	if(a<=4&&b<=4)
		p=1;
	else
		p=0;
	return(p);
}
void main()
{
	int num(int a,int b);
	int a[5][5];
	int i,j,m,n,c,d=0,t=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&m,&n);
	c=num(m,n);
	if(c==0)
		printf("error\n");
	else
	{
		for(i=0;i<5;i++)
		{
			t=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=t;
		}
		for(i=0;i<5;i++)
		    for(j=0;j<5;j++)
			{
				if(j%5-4!=0)
					printf("%d ",a[i][j]);
				else
					printf("%d",a[i][j]);
				d=d+1;
				if(d%5==0)
					printf("\n");
			}
	}
}
	