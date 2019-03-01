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
	int a[100],b[100],n,i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		{
			if(a[j]==a[i])
				break;
		}
		if(j==i)
		{
			b[k]=a[i];
			k++;
			
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d",b[i]);
		if(i<k-1)
			printf(",");
	}

}