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
	int m,n;
	scanf("%d %d",&n,&m);
	int u[100],i;
	for(i=0;i<=n-2;i++)
	{
		scanf("%d ",&u[i]);
	}
	scanf("%d",&u[n-1]);
	int *p;
	p=u+n-m;
	int k=0;
	while(k<n-1)
	{
		printf("%d ",*p);
		p++;
		p=(p-u)%n+u;
		k++;
	}

printf("%d",*p);
	return 0;
}

