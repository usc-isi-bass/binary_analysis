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
	int m,a,b,f,j;
	scanf("%d",&m);
	for(a=3;a<=m/2;a=a+2)
	{
		f=1;
		for(j=2;j<a;j++)
		{
			if(a%j==0)
			{
				f=0;
				break;
			}
		}
		if(f==0)
			continue;
		b=m-a;
		f=1;
		for(j=2;j<b;j++)
		{
			if(b%j==0)
			{
				f=0;
				break;
			}
		}
		if(f)
			printf("%d %d\n",a,b);
	}

	return 0;
}
