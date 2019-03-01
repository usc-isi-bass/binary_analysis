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
	int n,i,max1,max2;
	scanf("%d",&n);
	int a[100];
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	max1=-99999;max2=-99999;
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>max1) max1=a[i];
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>max2&&a[i]<max1) max2=a[i];
	}
	printf("%d\n%d",max1,max2);
}