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
	int n,a=-1,b=-1,c,d,x,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x);
			if(x==0)
			{
				c=i;
				d=j;
				if((a==-1)&&(b==-1))
				{
					a=i;b=j;
				}
			}
		}
	}
	x=(c-a-1)*(d-b-1);
	printf("%d",x);
	return 0;
}