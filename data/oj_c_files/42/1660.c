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
	int n,s=0,i,k,a[100000],b[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			b[i]=0;
		}
		else
		{
			b[i]=1;
			s=s+1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==1)
		{
			if(s==1)
		    {
				printf("%d",a[i]);
			}
			else
			{
				printf("%d ",a[i]);
				s=s-1;
			}
		}
	}
	return 0;
}
