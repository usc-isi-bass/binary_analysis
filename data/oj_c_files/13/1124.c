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
	int n,num[20000],i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num[i-1]);
		for(j=1;j<=i-1;j++)
			if(num[j-1]==num[i-1])
			{
				num[i-1]=0;
				break;
			}
	}
	printf("%d",num[0]);
	for(i=1;i<=n-1;i++)
	{
		if(num[i]!=0) printf(" %d",num[i]);
	}
	return 0;
}