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
	int a,b,c,d,t,i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		c=0;t=0;
		for(j=0;j<a;j++)
		{
			scanf("%d",&b);
			t=b+3*j;
			if(t<=60)
				c=b;
			else
			{
				t=c+3*j-3;
				break;
			}
		}
		for(j++;j<a;j++)
		{
			scanf("%d",&d);
		}
			if(t<57)
				c+=57-t;
			if(a==0)
				c+=3;
		printf("%d\n",c);
	}
	return 0;
}