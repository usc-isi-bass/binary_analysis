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
	long int n,m,a[100],b[100],i=0;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=n-1;i++)
		b[i]=a[i];
	for(i=0;i<=n-1;i++)
	{
		if(i+m<=n-1) a[i+m]=b[i];
		if(i+m>n-1)  a[i+m-n]=b[i];
	}
	for(i=0;i<=n-2;i++)
		printf("%d ",a[i]);
	printf("%d",a[n-1]);

}