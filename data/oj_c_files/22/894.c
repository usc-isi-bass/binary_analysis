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
	int a,b,c,i;
	b=0;
	c=0;
	i=0;
	scanf("%d",&a);
	while(getchar()!=EOF)
	{
		if(a>b)
		{
			c=b;
			b=a;
		}
		else if(a==b)
			b=a;
		else
		{
			if(c<=a)
				c=a;
		}
		scanf("%d",&a);
		i++;
	}
	if(b==c||i==1||c==0)
	printf("\nNo");
	else
		printf("\n%d",c);
	return 0;
}

