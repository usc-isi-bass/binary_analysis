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
	int n,i,j,k;
	int a[100000];
	
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}

	scanf("%ld",&k);

	for(i=0;i<n;i++)
	{
		while(a[i]==k && n>i)
		{
			for(j=i+1;j<n;j++)			a[j-1]=a[j];
			n=n-1;
		}
	}
 
	for(i=0;i<n-1;i++)		printf("%ld ",a[i]);
	if(n>=0)				printf("%ld",a[n-1]);

}