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
	int n,m,i,a[100],b[100]={0},*p;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=&b[0];
	for(i=m;i<n;i++)
	{
		*(p+i)=a[i-m];
	}
	p=&b[0];
	for(i=0;i<m;i++)
	{
		*(p+i)=a[n-m+i];
	}
	for(i=0;i<n-1;i++)
	printf("%d ",*(p+i));
	printf("%d",*(p+n-1));
}