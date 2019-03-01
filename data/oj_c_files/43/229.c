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
	int m,i,k,j,n;
	scanf("%d",&m);
	for(i=3;i<=(m/2);i++)
	{
		k=1;
		for(j=2;j<=(i/2);j++)
		{
			if(i%j==0)
			{
				k=0;
			}
		}
		if(k==1)
			n=m-i;
		for(j=2;j<=(n/2);j++)
		{
			if(n%j==0)
			{
				k=0;
			}
		}
		if(k==1)
		printf("%d %d\n",i,n);
	}
	return 0;
}

