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
	int i,n,jieguo=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if((i-7)%10==0)
			jieguo=jieguo;
		else if((i/10)==7)
			jieguo=jieguo;
		else if(i%7==0)
			jieguo=jieguo;
		else
			jieguo+=i*i;
	}
	printf("\n%d",jieguo);
	return 0;
}
