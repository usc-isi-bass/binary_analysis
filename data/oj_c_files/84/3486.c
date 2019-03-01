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

int main()
{
	int a[10000];
	int i,n;
	int max,max2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max=0;
	for(i=0;i<n;i++)
		if(max<=a[i]) 
		{
			max=a[i];
		}
	max2=0;
	for (i=0;i<n;i++)
		if ((a[i]<max)&&(a[i]>=max2)) max2=a[i];
	printf("%d\n%d\n",max,max2);
	return 0;
} 