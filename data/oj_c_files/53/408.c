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
	 long a[300];
     int n,i,j;
	scanf("%d",&n);
	scanf("%ld",&a[0]);
	printf("%ld",a[0]);
	for(i=1;i<n;i++)
	{
		scanf("%ld",&a[i]);
	    for(j=0;j<i;j++)
		{
			if(a[i]==a[j])break;
		}
		if(j>=i)
			printf(",%d",a[i]);
	}
		return 0;
}
