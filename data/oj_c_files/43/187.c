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
	int m,i,j,a,b;
	scanf("%d",&m);
	i=3;
	while (i<=m/2)
	{
		a=0;
		b=0;
		j=2;
		while (j<i)
		{
			if (i%j==0) break;
			j=j+1;
		}
		if (j==i)
			a=i;
		j=2;
		while (j<m-i)
		{
			if ((m-i)%j==0) break;
			j=j+1;
		}
		if (j==m-i)
			b=m-i;
		if (a>0 && b>0)
			printf("%d %d\n",a,b);
		i=i+2;
	}
	return 0;
}