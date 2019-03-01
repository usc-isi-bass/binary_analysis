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
	int n,i,a[300],max=0,secondmax=0;
	char c;
	for(n=0;1;n++)
	{
		scanf("%d%c",&a[n],&c);
		if(a[n]>max)
		{
			secondmax=max;
			max=a[n];
		}
		if(a[n]>secondmax&&a[n]<max)
		{
			secondmax=a[n];
		}
		if(c=='\n')
			break;						//continue????????????????break????
	}
	if(secondmax==0)
		printf("No\n");
	else
		printf("%d\n",secondmax);
	return 0;
}