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
	int n,m,i,*p;
	scanf("%d%d",&n,&m);
	p=(int*)malloc(n*sizeof(int));

	for(i=m;i<=n-1;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
		printf("%d%c",*(p+i),(i<n-1)? ' ':'\n');
	return 0;
}