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
	int a[10000],b[10000],c[10000]={0},d[10000]={0};
	int i,n;
	scanf ("%d",&n);
	for (i=0;i<10000;i++)
	{
		scanf ("%d %d",&a[i],&b[i]);
		if (a[i]==0&&b[i]==0)break;
		c[a[i]]++;
		d[b[i]]++;
	}
	for (i=0;i<n;i++)
	{
	if (d[b[i]]==n-1&&c[b[i]]==0)
	{
	printf ("%d",b[i]);
	break;
	}
	}
	if (i==n)
	printf ("NOT FOUND");
}