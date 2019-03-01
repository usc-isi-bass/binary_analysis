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
	int h,i,d,j;
	int a[20001];
	scanf("%d",&h);
	for(i=1;i<=h;i++)
		scanf("%d",&a[i]);
	printf("%d",a[1]);
	for(i=2;i<=h;i++)
	{
		d=0;
		for(j=1;j<i;j++)
		{
			if(a[i]==a[j])
			{
				d=1;
				break;
			}
		}
		if(d==0)
			printf(" %d",a[i]);
	}
}