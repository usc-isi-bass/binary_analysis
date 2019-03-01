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
	int n,k,m,i,x;
	scanf("%d%d",&n,&k);
	m=n;
loop:x=m;
	for(i=1;i<=n;i++)
	{
		if(x%n==k&&((x-k-x/n)!=0))
			x=x-k-x/n;
		else
		{
			m++;
			goto loop;
		}
	}
	 printf("%d",m);
}

