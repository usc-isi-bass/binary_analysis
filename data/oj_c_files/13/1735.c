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
	int k,i,j,n,m;
	scanf("%d",&k);
	char c[20000];
	for (i=1;i<=k;i++)
	{
		scanf("%d",&c[i]);
	}
	printf("%d",c[1]);
	for (n=2;n<=k;n++)
	{
	    for (j=1;j<=n-1;j++)
		{
		     if (c[n]==c[j])
			     break;
		}
        if (j==n&&c[n]!=c[n-1])
		{	printf(" ");
	    	printf("%d",c[n]);
		}
	}
    return 0;
}