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
	int a[101];
	int i,j,k,n,max,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	max=a[1];
	for(j=1;j<=n;j++)
	{
		if(max<a[j])
			max=a[j];
	}
	m=a[1];
	for(k=1;k<=n;k++)
	{
		if((a[k]<max)&&(m<a[k]))
			m=a[k];
	}
	printf("%d\n",max);
	printf("%d",m);
}