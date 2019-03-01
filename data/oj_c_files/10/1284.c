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
	int n,j,k,a[25],i,c,b[25],t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=1;
	}

	for(j=n-2;j>=0;j--)
	{
		t=0;
		for(k=j+1;k<n;k++)
		{		
			if(a[k]<=a[j]&&b[k]>t)
			{
				t=b[k];						
			}		
		}
		b[j]=b[j]+t;
	
	}
	c=b[0];
	for(i=1;i<n;i++)
	{
		if(b[i]>c)
		{
			c=b[i];
		}
	}

	printf("%d",c);


}