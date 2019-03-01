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
	int n,a[300],b[300],i,j,m=1;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++) scanf("%d",&a[i]);
	b[0]=a[0];
	for(i=0;i<=n-1;i++)
	{
		for (j=0;j<=m-1;j++)
		{
			if(a[i]==b[j]) break;
		}
		if (j==m)
		{
			m++;
			b[m-1]=a[i];
		}
		else continue;
	}
	for(i=0;i<=m-1;i++) 
	{
		if (i!=0) printf(",");
		printf("%d",b[i]);
	}
}

