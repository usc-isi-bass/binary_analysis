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

void s(int m);
main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	s(a);
	printf(" ");
	s(b);
}
void s(int m)
{
	int i,j,c[1000],d;
	for(i=0;i<m;i++)
		scanf("%d",&c[i]);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m-i-1;j++)
		{
			if(c[j]>c[j+1])
			{
				d=c[j];
				c[j]=c[j+1];
				c[j+1]=d;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%d",c[i]);
		if(i!=m-1)
			printf(" ");
	}
}