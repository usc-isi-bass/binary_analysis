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

int main()
{
	int i,j,n,flag;
	int a[100000];
	scanf("%d\n",&n);
	scanf("%d",&a[0]);
	for(i=1;i<n;i++)
	{
		scanf(" %d",&a[i]);
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(a[j]==a[i])
				flag=1;
		}
		if(flag==0)
		printf(" %d",a[i]);
	}
	return 0;
}
