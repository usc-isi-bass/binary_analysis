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
	int m,i,a,j;
	scanf("%d",&m);
	for(i=3;i<=m/2;)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)break;
		}
		if(j==i)
		{
			a=m-i;
			for(j=2;j<=a;j++)
			{
				if(a%j==0)break;
			}
			if(j==a)
				printf("%d %d\n",i,a);
		}
		i=i+2;
	}
	return 0;
}

