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
	int n,i,s,max;
	int a[10000];
	scanf("%d",&n);
	s=0;
	for (i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	max=0;
	for (i=1;i<=n;i++)
		if (abs(a[i]*n-s)>max) max=abs(a[i]*n-s);
	for (i=1;i<=n;i++)
		if (abs(a[i]*n-s)==max)
		{
			printf("%d",a[i]);
			break;
		}
	i++;
	for (;i<=n;i++)
		if (abs(a[i]*n-s)==max) printf(",%d",a[i]);

	return(0);
}