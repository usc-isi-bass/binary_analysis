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
	int i,j,m=0,n,k,r;
	scanf("%d %d",&n,&k);
	for (i=1;m==0;i++)
	{
		m=(n-1)*i;
		r=m%(n-1);
		for (j=n;(j>0)&&(r==0);j=j-1)
		{
			m=n*m/(n-1)+k;
			r=m%(n-1);
		}
        if (r==0||j==0) m=m;
        else m=0;
	}
	printf("%d",m);
}
	