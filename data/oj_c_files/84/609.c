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
	int a,b[100],c,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		scanf("%d",&b[i]);
	if(b[1]<b[2])
	{
		c=b[1];
		b[1]=b[2];
		b[2]=c;
	}
	else
	{
		if(b[i]>=b[1])
		{
			c=b[2];
			b[2]=b[1];
			b[1]=b[i];
		}
		else
		{
			if(b[i]>=b[2])
			{
				c=b[2];
				b[2]=b[i];
			}
		}
	}
	}
	printf("%d\n",b[1]);
	printf("%d\n",b[2]);
	return 0;
}