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
	int k,i,j;
	int a[26],b[26];
	for(i=1;i<26;i++)
		b[i]=0;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
		scanf("%d",&a[i]);

	int num[26];
	int max;
	num[k]=1;
	for(i=k-1;i>0;i--)
	{
		for(j=k;j>i;j--)
			if(a[j]<=a[i])
				b[j]=num[j];
		max=0;
		for(j=k;j>i;j--)
			if(b[j]>=max)
				max=b[j];					
		num[i]=max+1;
		for(j=1;j<26;j++)
			b[j]=0;
	}
		
	int x;
	x=num[1];
	for(i=1;i<=k;i++)
	{
		if(x<=num[i])			
			x=num[i];
	}
	printf("%d\n",x);
	return 0;
}
