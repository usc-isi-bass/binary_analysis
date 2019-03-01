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
	int a[100000],n,i,t,k,m=0,*p;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
		scanf("%d",&*(p+i));
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(*(p+i)==k)
		{
		for(t=i;t<n;t++)
			*(p+t)=*(p+t+1);
		m=m+1;
		i=i-1;
		}
	}
	for(i=0;i<n-1-m;i++)
		printf("%d ",*(p+i));
	printf("%d",*(p+i));
	return 0;
}