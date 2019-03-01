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
	int n,a[20100],i,j;
	scanf("%d",&n);
	scanf("%d",a);
	printf("%d",*a);
	for(i=1;i<n;i++)
	{
		scanf("%d",a+i);
		for(j=0;j<i;j++)
		{
			if(a[j]==a[i]) break;
		}
		if(j==i) printf(" %d",*(a+i));
	}
}