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
	int n,k,m,x,y,z,i;
	scanf("%d%d",&n,&k);
	for(z=1;;z++)
	{
		x=z;
		for(i=1;1<=n;i++)
		{
			
		    y=(x*n+k)%(n-1);
		    if(y==0)
				x=(x*n+k)/(n-1);
		    else
				break;
	}
	if(i==n)
		break;
	}
		m=x*n+k;
	printf("%d",m);
}