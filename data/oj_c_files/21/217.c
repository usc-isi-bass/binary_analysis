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
	int n,a[50],i=0,j,s=0,t;
	float av,c1,c2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s+=a[i];
	}
	av=(float)s/n;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	c1=av-a[n-1];
	c2=a[0]-av;
	if(c1>c2)
		printf("%d\n",a[n-1]);
	else if(c2>c1)
		printf("%d\n",a[0]);
	else
		printf("%d,%d\n",a[n-1],a[0]);
}
	

