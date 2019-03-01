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
	int n;int m;scanf("%d %d",&n,&m);
	int a[100];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int b[100];
	
	for(i=0;i<n;i++)
	{
		if(i<n-m)
		{
			b[i+m]=a[i];
		}
		else if(i>=n-m)
		{
			b[i-n+m]=a[i];
		}
	}
	for(i=0;i<n-1;i++){printf("%d ",b[i]);}printf("%d",b[n-1]);

	return 0;
}