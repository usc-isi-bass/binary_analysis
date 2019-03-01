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
	int n,a[100001],h,i,j;
	char c;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		h=0;
		scanf("%d%c",&a[i],&c);
		if(i==1)
			printf("%d",a[i]);
		else
		{
		for(j=1;j<i;j++)
			if(a[j]==a[i])
			{
				h=1;
				break;
			}
			if(h==0)
				printf(" %d",a[i]);
		}
	}
}