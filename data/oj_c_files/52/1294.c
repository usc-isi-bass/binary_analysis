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
	int m,n,i,*p,t;
	int a[100];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=m;i++)
	{
		t=a[n-1];
		p=a+n-1;
		while(p!=a)
		{
			*p=*(p-1);
			p--;
		}
		a[0]=t;
	}
	for(i=0;i<n;i++)
	{
		if(i)
			printf(" ");
		printf("%d",a[i]);
	}
	printf("\n");
}
