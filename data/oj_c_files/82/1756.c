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
	int n,a,b,p,c;
         int d=0;
	int i=0;
	int max(int x,int y);
	scanf("%d",&n);//????n
	for(p=1;p<=n;p++)
	{
		scanf("%d %d ",&a,&b);//????
		if(90<=a&a<=140)
		{
			if(60<=b&b<=90)
			{
				i=i+1;
			}
			else
			{
				i=0;
			}
		}
		else
		{
			i=0;
		}
		c=i;
		d=max_int(d,c);
	}
	printf ("%d\n",d);
	return 0;
}
int max_int(int x,int y)
{
	int z;
	if(x>y)
	{
		z=x;
	}
	else
	{
		z=y;
	}
	return(z);
}