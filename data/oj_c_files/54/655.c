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
	int n,m,k,a=1,i;
	scanf("%d %d",&n,&k);
	do
	{
	    m=n*a+k;
	    for(i=1;i<n;i++)
		{
		   if(m%(n-1)==0)
		   m=k+n*m/(n-1);
		   else break;
		}
		a++;
	}
	while(i<n);
	printf("%d",m);
}
