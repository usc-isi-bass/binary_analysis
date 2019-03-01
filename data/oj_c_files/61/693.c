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
	int a[21],i,b[21],n;
	scanf("%d",&n);
	b[0]=1;
	b[1]=1;
	for(i=2;i<=20;i++)
		b[i]=b[i-1]+b[i-2];	
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i-1]);
	printf("%d\n",b[(a[i-1]-1)]);
	}
	scanf("%d",&a[n-1]);
	printf("%d",b[(a[n-1])-1]);

	return 0;
}
