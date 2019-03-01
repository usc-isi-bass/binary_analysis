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

main()
{
	int i,j=1,k,l=1,n,m;
    scanf("%d %d",&n,&k);
	for (j=1;l!=0;j++)
	{l=0;
		m=j*n+k;
	for (i=1;i<n;i++)
	{
		
		l=l+m%(n-1);
		m=m/(n-1)*(n)+k;
		
	}
	}
	printf("%d\n",m);
}

