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
	int sum,x,y,k,i,a;
	scanf("%d\n%d%d",&sum,&x,&y);
		for(i=1;i<sum-1;i++)
		{
			scanf("%d",&k);
			if(x>k)
			{
                a=k;
				x=x;
				if(y>a)
				{
					y=y;
				}
				if(y<a)
				{
					y=a;
				}
			}
			if(x<k)
			{
				a=x;
				x=k;
				if(y>a)
				{
					y=y;
				}
				if(y<a)
				{
					y=a;
				}
			}
		}
		printf("%d\n%d\n",x,y);
}