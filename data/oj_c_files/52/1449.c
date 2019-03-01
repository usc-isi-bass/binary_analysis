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
	int n,m,i,a[10000];
	scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
	if(i<n-m)
    scanf("%d",&a[i+m]);
	if(i>=n-m)
	scanf("%d",&a[i-n+m]);
	}
	for(i=0;i<n-1;i++)
	printf("%d ",a[i]);
	printf("%d",a[i]);
}