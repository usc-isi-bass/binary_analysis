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
	int a[100000];
	int i,n,m,k,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&m);
	for(k=0,i=0;i<n-k;)
	{
		if(a[i]==m)
		{
			for(j=i;j<n-k-1;j++)
				a[j]=a[j+1];
			k++;
		}
		else i++;
	}
	for(i=0;i<n-k-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[n-k-1]);
}
