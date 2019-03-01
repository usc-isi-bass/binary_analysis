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

int main ()
{
	int m,n,a[200]={0},i;
scanf("%d",&n);
scanf("%d",&m);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	a[i+n]=a[i];
}
for(i=n-m;i<2*n-m-1;i++)
{
		printf("%d ",a[i]);
}
printf("%d",a[2*n-m-1]);

return 0;
}