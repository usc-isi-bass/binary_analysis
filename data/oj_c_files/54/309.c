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
	int n,k,m,i=1,a=1;
	scanf("%d%d",&n,&k);
	m=a*n+k;
        do
	{
		if(m%(n-1)==0)
		{
			m=m*n/(n-1)+k;
			i=i+1;
		}
		else 
		{
			a++;
			m=a*n+k;
			i=1;
		}
	}

   while(i<=(n-1));
	printf("%d\n",m);
}