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


main()
{
	int max1,max2,n,i,j,a[100];
	scanf("%d\n",&n);
	max1=0;
	max2=0;
    for (i=1;i<=n;i++) 
	{
		scanf("%d",&a[i]);
		if (a[i]>max1) 
		{
			max1=a[i];
			j=i;
		}
	}
    for (i=1;i<=n;i++)
	{
		if (i!=j) 
			if (a[i]>max2) max2=a[i];
	}
	printf("%d\n%d\n",max1,max2);
}