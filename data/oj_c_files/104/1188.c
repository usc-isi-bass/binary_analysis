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
	int i,j,k;
	int a,b,c;
	int t1,t2;
	int x[100],y[100],z;
	
	
	scanf("%d%d",&a,&b);

	i=0;
	do
	{
		x[i++]=a;
		a/=2;
	}
	while(a>1);
	x[i]=1;
	t1=i;

	
	
	j=0;
	do
	{
		y[j++]=b;
		b/=2;
	}
	while(b>1);
	y[j]=1;
	t2=j;


	for(i=0;i<=t1;i++)
	{
		for(j=0;j<=t2;j++)
		{
			if(x[i]==y[j])
			{
				printf("%d\n",x[i]);
				goto flag;
			}
		}
	}
flag:;
}