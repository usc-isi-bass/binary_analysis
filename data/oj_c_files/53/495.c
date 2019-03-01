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
	int n,comp,i,j,p;
	scanf("%d",&n);
	int a[300],b[300];



	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	
	if(n==1)printf("%d",a[0]);
	

	
	else if(n>=2)
{	for(i=0;i<=n-2;i++)
	{
		comp=a[i];
		for(j=i+1;j<=n-1;j++)
		{
			if(a[j]==comp)
			{
				a[j]=1000;
			}
		}
	}

	p=0;
	for(i=0;i<=n-1;i++)
	{
		if(a[i]!=1000)
		{
			b[p]=a[i];
			p++;
		}
	}

	for(i=0;i<=p-2;i++)
	{
		printf("%d,",b[i]);
	}
	printf("%d",b[p-1]);
}



}		