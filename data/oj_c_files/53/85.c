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
	int i,num,a[300],b[300],*p;
	scanf("%d",&num);
	for (i=0;i<=(num-1);i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[0]);
	for (i=1;i<=(num-1);i++)
	{	
		for (p=a;p<&a[i];p++)
		{
			if (*p==a[i]) break;
		}
		if (p==&a[i]) printf(",%d",a[i]);
	}

}