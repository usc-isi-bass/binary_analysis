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
	int w,i,a[13]={0,13,44,72,103,133,164,194,225,256,286,317,347};
	scanf("%d",&w);
	for(i=1;i<13;i++)
	{
		a[i]=a[i]%7;
		a[i]=a[i]+w-1;
		if((a[i]%7)==5)
		{
			printf("%d\n",i);
		}
	}
}