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
	int i,j,n,m,a[100],t;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int *p=a;
	for(i=n-m-1;i>=0;i--)
	{
		p=a+i;
		for(j=0;j<m;j++)
		{
			t=*(p+1);
			*(p+1)=*p;
			*p=t;
			p++;
		}
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	return 0;
}

