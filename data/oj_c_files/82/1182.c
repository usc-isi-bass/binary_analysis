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
	int i,n,a[100],b[100],sum=0,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %d",&a[i],&b[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>=90 && a[i]<=140 && b[i]>=60 && b[i]<=90)
		{
			sum++;
		}
		else sum=0;
		if(sum>=max)
			max=sum;
	}
	printf("%d\n",max);
	return 0;
}
		
