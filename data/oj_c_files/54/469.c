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
	int i,q=1,m=0,n,p,k,d;
	scanf("%d %d",&n,&k);
	p=n-1;
    for(;;)
	{
loop:if(1)
		m++;
		d=m*n+k;
		for (i=2;i<=n;i++)
		{
			if (d%p!=0) goto loop;
			d=d*n/p+k;	
		}
		break;
	}
	printf("%d",d);
}