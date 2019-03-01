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
	int * change(int x[100],int y);
	int a1,a2,i;
	int *pt1,*pt2;
	int b[100],c[100];
	scanf("%d%d",&a1,&a2);
	for(i=0;i<a1;i++)
	{
		scanf("%d",&b[i]);
	}
	pt1=change(b,a1);
	for(i=0;i<a2;i++)
	{
		scanf("%d",&c[i]);
	}
	pt2=change(c,a2);
	for(i=0;i<a1;i++)
	{
		printf("%d ",*(pt1+i));
	}
	for(i=0;i<a2-1;i++)
	{
		printf("%d ",*(pt2+i));
	}
	printf("%d",*(pt2+a2-1));
}
int * change(int x[100],int y)
{
	int j,k,temp=0;
	for(j=1;j<y;j++)
	{
		for(k=0;k<y-j;k++)
		{
			if(x[k]>x[k+1])
			{
				temp=x[k+1];
				x[k+1]=x[k];
				x[k]=temp;
			}
		}
	}
	return(x);
}