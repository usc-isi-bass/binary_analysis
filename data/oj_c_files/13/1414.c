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
	int n, m, a[20000], i, j, k;
	scanf("%d",&n);
	if(n>=1 && n<=20000)
	{
		scanf("%d",&a[0]);
		for(i=1; i<n; i++)
			scanf(" %d",&a[i]);//??n???
		for(i=0, m=0; i<n-m-1; i++)
		{
			for(j=i+1; j<n-m; j++)
			{
				if(a[i]!=a[j])
					continue;
				else
				{
					for(k=j; k<n-m-1; k++)//?????????????????????
						a[k]=a[k+1];
					m++;
					j--;
				}
			}
		}
		printf("%d",a[0]);
		for(i=1; i<n-m; i++)
			printf(" %d",a[i]);
	}
}
						
