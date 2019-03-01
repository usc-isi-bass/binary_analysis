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
	int a[300],n,i,j,s=0;
	double b[300],c,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	c=(double)s/(double)n;
	for(i=0;i<n;i++)
		b[i]=a[i]-c;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(fabs(b[i])<fabs(b[j]))
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
			else if(fabs(b[i])==fabs(b[j]))
				if(b[i]>b[j])
				{
					t=b[i];
					b[i]=b[j];
					b[j]=t;
				}
    for(i=0;i<n;i++)
		a[i]=b[i]+c;
	j=0;i=0;
	while(fabs(b[i])==fabs(b[0]))
	{
		if(j>0)
			printf(",");
		printf("%d",a[i]);
		j++;i++;
	}
}