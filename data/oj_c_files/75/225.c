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
	char c;
	int max(int array[]);
	int x[1000]={0},y[1000]={0};
	int a[1000]={0},num,i,j;
	for(i=0;i<1000;i++)
	{
		scanf("%d",&x[i]);
		c=getchar();
        if(c=='\n')break;
	}
	for(i=0;i<1000;i++)
	{
		scanf("%d",&y[i]);
		c=getchar();
        if(c=='\n')break;
	}
	num=i+1;
	for(i=0;i<1000;i++)
	{
		for(j=0;j<num;j++)
		{
			if(x[j]<=i&&y[j]>i)
			{
				a[i]=a[i]+1;
			}
		}
	}
	printf("%d %d\n",num,max(a));
	return 0;
}

int max(int array[])
{
	int x=0,i;
	for(i=0;i<1000;i++)
	{
		if(array[i]>x)
			x=array[i];
	}
	return(x);
}