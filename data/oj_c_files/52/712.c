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
	int shu[200];
	int n,m,i,a;
	scanf("%d%d",&n,&m);
  	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		shu[i]=a;
	}
  	for(i=100;i<100+m;i++)
	{
		shu[i]=shu[n-m+i-100];
		printf("%d ",shu[i]);
	}
  	for(i=100;i<100+n-m-1;i++)
	{
		shu[m+i]=shu[i-100];
		printf("%d ",shu[m+i]);
	}
	printf("%d\n",shu[n-m-1]);
	return 0;
}


