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
	int a[100],i=0,j=0,k=0,t1=0,t2=0,sum=0,n;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	
	for(i=n-1;i>=0;i--)
	{
		if(i!=0)
		printf("%d ",a[i]);
		else
		printf("%d",a[i]);
	}

	return 0;
}