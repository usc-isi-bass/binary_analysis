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
	int n,m,j,k,mark;
	long double i;
	scanf("%d %d",&n,&k);
	for(i=k;i<1000000000;i++)
	{
		m=0;mark=1;
		m=i*n+k;
		for(j=1;j<n;j++)
		{
			if(m%(n-1)!=0)
			{mark=0;break;}
			else
				m=m/(n-1)*n+k;
		}
		if(mark!=0)
		{printf("%d",m);break;}
	}
	return 0;
}
