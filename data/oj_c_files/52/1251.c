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
	int n,m,i,j,a[101];
	scanf("%d%d",&n,&m); 
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	i=0;
	while(i!=m)
	{
		for (j=n;j>0;j--)
		{
			a[j]=a[j-1];
		}
		a[0]=a[n];
		i++;
	}
	for(i=0;i<n-1;i++)
	printf("%d ",a[i]);
	printf("%d",a[n-1]);
}

