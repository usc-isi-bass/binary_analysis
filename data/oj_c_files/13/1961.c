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
	int n,i,a[30000],j;
	scanf("%d\n",&n);
	scanf("%d",&a[0]);
	printf("%d",a[0]);
    for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
        for   (j=0;j<=i;j++)
		{
			if (a[i]==a[j])
				break;
		}
	    if (j==i)
			printf(" %d",a[i]);
	}
	return 0;
}
