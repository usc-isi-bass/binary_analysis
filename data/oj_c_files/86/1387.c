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

int main()
{
	int n,a[60][60],b[60],i,j,c[60],d[600],e[600];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		c[i]=0;
		e[i]=0;
		for(j=0;j<b[i];j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]+3*j<58)c[i]++;
			if(a[i][j]+3*j<61&&a[i][j]+3*j>57)e[i]=60-a[i][j]-3*j;
		
		}
		d[i]=60-3*c[i]-e[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",d[i]);
	}
	
	return 0;
}

		
	