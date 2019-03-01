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
	int n,i,k,m,a[100000];
	scanf("%d\n",&n);
	for(i=0;i<n-1;i++)
		scanf("%d ",&a[i]);
	scanf("%d",&a[n-1]);
	putchar('\n');
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			for(m=i;m<n;m++)
				a[m]=a[m+1];
			i--;
             n=n-1;
		}
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	printf(" %d",a[i]);
}