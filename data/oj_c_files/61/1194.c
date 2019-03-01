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
	long n,i,j,a[20],c,d,e;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		c=1,d=1,e=1;
		for(j=2;j<a[i];j++)
		{
			e=c+d;
			c=d,d=e;
		}
		printf("%d\n",e);
	}
	return 0;
}