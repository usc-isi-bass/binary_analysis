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
	int a[100];
	int n,t,i,j;
	scanf("%d",&n);
	if(n>1&&n<100)
	{
	    for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
		printf("\n");
		for(j=0;j<n-1;j++)
		{	for(i=0;i<n-1-j;i++)
				if((abs(a[i]))>(abs(a[i+1])))
				{
					t=a[i];
					a[i]=a[i+1];
					a[i+1]=t;
				}
		}
		printf("%d\n%d\n",a[n-1],a[n-2]);
		
	}
}