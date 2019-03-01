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
	int n,k;
	int arr[1001];
	int i,j,bb;

	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		bb=k-arr[i];
		for(j=i+1;j<n;j++)
		{
			if(bb==arr[j])
			{
				printf("yes\n");
				return 0;
			}
		}
	}
	if(i==n-1)printf("no\n");
}