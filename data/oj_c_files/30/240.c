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
	int a=0,c=0,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if((i%7==0) || ((i>=70) && (i<80)) || i==17 || i==27 || i==37 || i==47 || i==57 || i==67 || i==87 || i==97 )
		{
			continue;
		}
		a=i*i;
		c=c+a;
	}
	printf("%d\n",c);
}
