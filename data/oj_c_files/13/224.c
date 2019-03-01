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
	int n,i,m,k=0,t,a[20001];
	scanf("%d\n",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=1;i<n-k;i++) 
	{
		for(m=1;m<=i;m++)
		{
			if(a[i]==a[i-m])
			{
			       t=i;
			       for(i=t;i<n-k;i++) a[i]=a[i+1];
			       i=t-1;
			       k++;
			}
		}
	}
	for(i=0;i<n-k-1;i++) printf("%d ",a[i]);
	printf("%d",a[n-k-1]);
}