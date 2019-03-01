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
	int n,i,j;
	scanf("%d\n",&n);
	int a[200],b[200];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		j=n+1-i;
		b[j]=a[i];
	}
	j=1;
	while(j<n)
	{
		printf("%d ",b[j]);
		j=j+1;
	}
	printf("%d",b[j]);
	return 0;
}