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
	int j,i,k,f[25],a[25];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d ",&a[i]);
		f[i]=1;
	}
	for(i=k-2;i>=0;i--)
	{
		for(j=k-1;j>=i+1;j--)
		{
			if(a[i]>=a[j]&&f[i]<=f[j])
				f[i]=f[j]+1;
		}
	}
	
		for(j=0+1;j<k;j++)
		{
			if(f[0]<f[j])
			{
				f[0]=f[j];
			}
		}
		printf("%d",f[0]);
			
}
