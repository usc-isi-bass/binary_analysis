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

char a[10000][256];
void main()
{
	int n,k;
	int i,j;
	int a[1000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=0;j<n-i;j++)
		{
			if(a[i]+a[i+j]==k)
			{
				printf("yes\n");
				goto end;
			}
			if(i==n-1&&j==n-i-1)printf("no\n");
		}
    end:;
	
}