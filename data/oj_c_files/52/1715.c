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
	int n,m,i;
	scanf("%d%d",&n,&m);
	
	int * p,* h;
	p=(int *)malloc(sizeof(int)*n);
	h=p;
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}
	p=h;
	for(i=n-m;i<n;i++)
	{
		printf("%d ",*(p+i));
	}
	for(i=0;i<n-m-1;i++)
		printf("%d ",*(p+i));
	printf("%d",*(p+n-m-1));
	free(p);
	return 0;
}