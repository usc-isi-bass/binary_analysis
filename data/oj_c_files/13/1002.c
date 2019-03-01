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
	int n,i,j,a[20000],b[20000];
	scanf("%d",&n);
	scanf("%d",&a[0]);
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
	    for(j=0;j<i;j++)
		{
			b[i]=a[i]-a[j];
			if(b[i]==0)
				break;
		}
	}
	printf("%d",a[0]);
	for(i=0;i<n;i++)
	{
		if(b[i]!=0)
			printf(" %d",a[i]);
	}
	return 0;
}