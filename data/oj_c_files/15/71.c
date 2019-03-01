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
	int n;
	int a=0,b=0;
	int i,j;
	int c=1000,d=1000;
	int num;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&num);
			if(num==0)
			{
				if(a<i)
					a=i;
				if(b<j)
					b=j;
				if(c>i)
					c=i;
				if(d>j)
					d=j;
			}
		}
	}
	printf("%d\n",(a-c-1)*(b-d-1));
}