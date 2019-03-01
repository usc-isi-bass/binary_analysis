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
    int a[A],i,j,n,b[A],max=0;
	scanf("%d",&n);
	for(i=n-1;i>=0;i--)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    b[i]=1;
        for(j=i-1;j>=0;j--)
		{
			if(a[i]>=a[j]&&b[i]<b[j]+1)
			{
                 b[i]=b[j]+1;
			} 
		}
	}
	for(i=0;i<n;i++)
	{
		if(max<b[i]) max=b[i];
	}
	printf("%d",max);
	return 0;
}

