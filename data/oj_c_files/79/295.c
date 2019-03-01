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

int m;
void main()
{
	int n,a[300],i;
	void sear(int a[300],int n);
	for(;;)
	{scanf("%d%d",&n,&m);
	if(n==0)break;
	for(i=0;i<300;i++)
		a[i]=i+1;
	sear(a,n);
	}
}
	
void sear(int a[300],int n)
{
	int i,k,b[300];
	if(n>0)
	{
		for(i=0,k=m%n;i<n-1;i++,k++)
			b[i]=a[k%n];
		    sear(b,n-1);
	}
	if(n==1)
		printf("%d\n",a[0]);
}