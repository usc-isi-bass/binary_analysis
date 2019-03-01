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


void main()
{
	int i,j,m,n,k,r;
	scanf("%d %d",&n,&k);
	for(m=n;;m++)
	{
        r=m;
		for(i=1;i<=n;i++)
		{
			if(k!=r-(r/n)*n) {r=r-k-r/n;break;}
			else r=r-k-r/n;
		}
        if(i==n+1&&r/(n-1)>=1) break;
	}
	printf("%d\n",m);
}