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
	int n,i=0,a[10000],max=0,may=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
			max=a[i];
		else if(a[i]>may)
			may=a[i];
		i++;
	}
	if(a[0]>may&&a[0]<max)
		may=a[0];
	printf("%d\n%d\n",max,may);
}