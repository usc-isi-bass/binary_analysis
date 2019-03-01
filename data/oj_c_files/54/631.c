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
	int m,n,k,z,r,i;
	scanf("%d%d",&n,&k);
	for(m=n;;m++)
	{
		r=m;
		for(i=1;i<=n;i++)
		{
            z=m-m/n*n;
			if(z!=k)
				break;
			else
				m=m/n*n-m/n;
		}
		if(i==n+1&&m>=1)
		{
			printf("%d\n",r);
			break;
		}
		else
		m=r;

	}
	return 0;
}
