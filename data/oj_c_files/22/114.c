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
	int a[300],i,k,max1 = 0,max2 = -1;
	for(i = 0;;i++)
	{
		scanf("%d",&a[i]);
		if(getchar()!=',')
			break;
	}
	for(k = 0;k<=i;k++)
	{
		if(a[k]>max1)
			max1=a[k];
	}
	for(k = 0;k<=i;k++)
	{
		if(a[k]<max1&&a[k]>max2)
			max2 = a[k];
	}
	if(max2>-1)
		printf("%d\n",max2);
	else
		printf("No\n");
}