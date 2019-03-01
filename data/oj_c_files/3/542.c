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
	int a[1001];
	int i,j;
	int flag=0;

	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n&&flag==0;i++)
		for(j=0;j<n&&flag==0;j++)
		{
			if(j>i&&a[i]+a[j]==k)
			{
				printf("yes\n");
				flag=1;
			}
		}
	if(flag==0)
		printf("no");
}