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
	int i,j,k,m,n,l;
	scanf("%d",&n);
	for (i=3;i<=n/2;i++)
	{
		k=n-i;
		l=1;
		for (j=2;j<=sqrt(i);j++)
			if (i%j==0)
			{
				l=0;
				break;
			}
		if (l==1)
		{
			l=1;
			for (j=2;j<=sqrt(k);j++)
				if (k%j==0)
				{
					l=0;
					break;
				}
			if (l==1)
				printf("%d %d\n",i,k);
		}
	}
    return 0;
}
