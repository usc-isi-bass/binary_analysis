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
	long n,k,t,i,j,p;
	long a[1000000];
	scanf("%ld",&n);
	for(i=0;i<n;i++)
		scanf("%ld",&a[i]);
	scanf("%ld",&k);
	p=0;
	for(i=0;i<n;i++)
		if(a[i]==k)
			p++;
	i=0;
	while(i<n)
	{
		if(a[i]==k)
		{
			for(j=i+1;a[j]==k;j++);
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			i++;
		}
		else i++;
	}
	for(i=0;i<n-p-1;i++)
		printf("%ld ",a[i]);
         printf("%ld",a[n-p-1]);
}