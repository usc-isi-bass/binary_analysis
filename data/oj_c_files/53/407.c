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
	int n,a[300],i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
		for(j=0;j<=i-1;j++)
			if(a[i]==a[j]) a[i]=1000000;
	for(i=0;i<n;i++)
		if(a[i]!=1000000) k=i;
	for(i=0;i<k;i++)
		if(a[i]!=1000000) printf("%d,",a[i]);
   printf("%d",a[k]);
	
}