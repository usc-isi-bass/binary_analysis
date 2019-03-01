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
	int n,i,j,t;
    int b[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	if(n%2==0)
	{
        for (j=n-1,i=0;i<(n/2);i++,j--)
		{
                      t=b[i];
		  b[i]=b[j];
		  b[j]=t;
		}
	}
    if(n%2!=0)
	{
        for (j=n-1,i=0;i<((n-1)/2);i++,j--)
		{
                      t=b[i];
		  b[i]=b[j];
		  b[j]=t;
		}
	}
	for (i=0;i<(n-1);i++)
	{
		printf("%d ",b[i]);
	}	
         printf("%d",b[n-1]);
	return 0;
}
