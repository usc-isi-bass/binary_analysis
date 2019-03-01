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
	int a[300],n,i,total=0,min,max;

	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d,",&a[i]);
	max=a[0];min=a[0];
	for(i=0;i<=n-1;i++)
	{
		total=total+a[i];
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}


    if((total-min*n)==(max*n-total))
		printf("%d,%d\n",min,max);
	else if((max*n-total)>(total-min*n))
		printf("%d",max);
	else
		printf("%d",min);
}
    
