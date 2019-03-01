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
	int a[500],b,i,j,n,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1-j;i++)
		{
			if(a[i]>a[i+1])
			{	b=a[i];
			a[i]=a[i+1];
			a[i+1]=b;}
		}
	}
	for(i=0;i<n;i++)
	{
		if((a[i]%2)!=0)
		{

			if(c!=0)
			printf(",%d",a[i]);
		
		else
			printf("%d",a[i]);
		c++;
		}

	}

}