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
	int i,n,max1=0,max2=0,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	    if(max1<a[i])
			max1=a[i];
	}
	printf("\n%d\n",max1);
	for(i=0;i<n;i++)
	{
		if(max2<a[i]&&max1>a[i])
			max2=a[i];
	}
	printf("%d\n",max2);
}
	    
