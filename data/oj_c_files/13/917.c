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
	int m,n,a[20000],i,j;
	j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("%d",a[0]);
	m=1;
	if(n>1)
	{
		do
		{

			for(i=m-1;i>=0;i--)
			{
				if(a[m]==a[i])
					j=j+1;
			}
			if(j==0)
				printf(" %d",a[m]);
			j=0;
			m=m+1;
		}while(m<n);
	}
	printf("\n");
}