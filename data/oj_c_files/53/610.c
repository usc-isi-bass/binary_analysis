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
	int n,a[100],i,j,k=0;int *p=&a[0];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++,p++)
		{
			int *p=&a[j];
			if(*p==a[i])
				*p=0;
			

		}
	}

	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{	if(a[i]!=0)
	printf(",%d",a[i]);}
}
	