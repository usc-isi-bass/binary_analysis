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
	int n,a[100],max1,max2,t,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max1=0;
	max2=1;
	for(i=1;i<n;i++)
		if(a[i]>a[max1])
			max1=i;
		t=a[0];
		a[0]=a[max1];
		a[max1]=t;
		for(i=2;i<n;i++)
			if(a[i]>a[max2])
				max2=i;
		printf("%d\n%d\n",a[0],a[max2]);
}