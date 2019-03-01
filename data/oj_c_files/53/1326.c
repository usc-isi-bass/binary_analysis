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
	int a[300];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
		if(i==0)printf("%d",a[i]);
		else 
		{
			for(j=0;j<i;j++)
			{
				if(a[j]==a[i])break;
			}
			if(i==j)printf(",%d",a[i]);
		}
	}
}