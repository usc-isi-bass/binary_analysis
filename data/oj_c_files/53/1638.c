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
	int i,j,n,m,b,a[20000];
	i=0;
	scanf("%d\n",&n);
	for(;i<=n-1;i++)
	{
		if(i<n-1)
		scanf("%d ",&a[i]);
		else 
		scanf("%d\n",&a[i]);
	}
		for(j=0;j<n;j++)
	{
	    if(j==0)
			printf("%d",a[j]);
		else
		{
			for(m=0,b=0;m<j;m++)
			{
				if(a[j]==a[m])
					b++;
			}
			if(b==0)
				printf(",%d",a[j]);
		}
	}
	return 0;
}
