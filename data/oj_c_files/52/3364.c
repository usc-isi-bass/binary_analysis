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
	int i,n,m,a[100],j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<m;j++)
	{
		if(j==0)
			printf("%d",a[j+n-m]);
		if(j!=0)
			printf(" %d",a[j+n-m]);
	}
	for(j=0;j<n-m;j++)
		printf(" %d",a[j]);
	printf("\n");
}
