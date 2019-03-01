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
	int n;
	int a[101];
	int i;
	int aa[4]={0};
	double m,b[4];

	scanf("%d",&n);

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
		if(a[i]<=18)
			aa[0]++;
		else if(a[i]<=35)
			aa[1]++;
		else if(a[i]<=60)
			aa[2]++;
		else
			aa[3]++;
	m=n;
	for(i=0;i<4;i++)
	{
		b[i]=100*aa[i]/m;
	}
	printf("1-18: %.2lf%%\n",b[0]);
	printf("19-35: %.2lf%%\n",b[1]);
	printf("36-60: %.2lf%%\n",b[2]);
	printf("60??: %.2lf%%\n",b[3]);
}