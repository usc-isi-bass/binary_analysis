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
	int n,a[301],i,j,*p1;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		p1=&a[0];
		for(j=0;j<i;j++)
		{
			if(a[i]==*(p1+j))
			{
				j++;
				break;
			}
		}
		j--;
		if(a[i]!=*(p1+j))
			printf(",%d",a[i]);
	}
}