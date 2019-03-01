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
	int n,k,i,m,z;
	scanf("%d %d",&n,&k);
	for(z=1;;z++)
	{
		m=n*z+k;
		for(i=2;i<=n&&m%(n-1)==0;i++)
			m=m/(n-1)*n+k;
		if(i==n+1)
		{
			printf("%d",m);
			break;
		}
	}
}