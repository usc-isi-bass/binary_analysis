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
	int m,i,j,a=0,b,c=0;
	scanf("%d",&m);
	for(i=3;i<m;i++)
	{
		for(j=2;j<=sqrt((double)i);j++) a=a+(i%j==0);
		if(a==0)
		{
			b=m-i;
			if(b>=i)
			{
			for(j=2;j<=sqrt((double)b);j++) c=c+(b%j==0);
			if(c==0) printf("%d %d\n",i,b);
			c=0;
			}
		}
		a=0;
	}
}