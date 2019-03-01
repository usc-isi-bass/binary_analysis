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
	int change(int);
	int a[100],i,m,n,j,t;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<m;j++)
	{
		t=a[n-1];
    	for(i=n-1;i>0;i--)
		a[i]=a[i-1];
    	a[0]=t;
	}
	 printf("%d",a[0]);
	for(i=1;i<n;i++)
		printf(" %d",a[i]);	
}
