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
	int n,m,i;
	int a[50];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=n-1;i>=m;i--)
		a[i]=a[i]*100+a[i-m];
	if(m==n/2+1) a[0]=a[n-m];
	else 
		a[0]=a[0]*100+a[n-m]/100;
	for(i=1;i<m;i++)
		a[i]=a[i]*100+a[n-m+i]/100;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]%100);
		if(i!=n-1) printf(" ");
	}
}

