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
	int n,i,a[100],k,b[100],j;
	scanf("%d",&n);
	for (i=1;i<=100;i++)
		a[i]=0;
	j=1;
	for (i=1;i<=n;i++)
	{
		scanf("%d",&k);
	
		if (a[k]==0) {
			b[j]=k;
			j++;
		}
		a[k]=1;
	}
	for (i=1;i<(j-1);i++)
		printf("%d ",b[i]);
	printf("%d",b[j-1]);

	return 0;
}