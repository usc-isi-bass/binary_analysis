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
	int a[300],j,n,max,i;
	int b[300]={-1};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
				a[j]=0;
		}
	}
	for(i=n-1;i>=0;i--)
	{
		if(a[i]!=0)
		{
			max=i;
		    break;
		}
	}
	for(i=0;i<n&&i!=max;i++)
	{
		if(a[i]!=0)
		{
          printf("%d,",a[i]);
		}
	}
    printf("%d",a[max]);
}