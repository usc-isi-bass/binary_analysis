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
	int i,n,a[100],max1,max2;
	scanf("%d",&n);
	for(i=1;i<=n;i++) scanf("%d",&a[i-1]);
	if(a[0]>=a[1]){max1=a[0];max2=a[1];}
	else {max1=a[1];max2=a[0];}
	for(i=3;i<=n;i++)
	{
		if(a[i-1]>=max1){max2=max1;max1=a[i-1];}
		else 
			if(a[i-1]>=max2) max2=a[i-1];
	}
	printf("%d\n%d\n",max1,max2);
}
