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

int main(int argc, char* argv[])
{
	int n,m,q,i,k;
	scanf("%d",&n);
	scanf("%d",&m);
	int *a=(int*)malloc(sizeof(int)*n);
    for (i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(k=0;k<n-m;k++)
	{
		q=a[0];
	     for(i=0;i<n-1;i++)
		 {
		     a[i]=a[i+1];
		 }
		 a[n-1]=q;
	}


	for (i=0;i<n-1;i++)
	{
	     printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
	return 0;
}
