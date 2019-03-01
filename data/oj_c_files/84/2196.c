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
	int a;
	scanf("%d",&a);
	int i,b,t,x,y;
	for(i=1;i<=a;i++)
	{
		scanf("\n%d",&b);
		if(b>=t)
		{	
			x=t;
			t=b;
		}
		else
		{	
			if(b>=x)
		    x=b;
		}
	}
	printf("%d\n%d",t,x);
	return 0;
}
