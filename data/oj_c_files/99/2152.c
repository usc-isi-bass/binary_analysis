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
	int n,b=0,c=0,d=0,e=0,a,i;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a<=18)
			b=b+1;
		else if(a<=35)
			c=c+1;
		else if(a<=60)
			d=d+1;
		else
			e=e+1;
	}
	printf("1-18: %.2lf%%\n",(double)b/n*100);
	printf("19-35: %.2lf%%\n",(double)c/n*100);
	printf("36-60: %.2lf%%\n",(double)d/n*100);
	printf("60??: %.2lf%%",(double)e/n*100);
	return 0;
}