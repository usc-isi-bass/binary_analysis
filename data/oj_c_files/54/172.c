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
	int i,n,k;
	int p=1,q;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
		p=p*(n-1);
	for(i=1;;i++)
	{
		q=p*i-k*(n-1);
		if(q>0)break;
	}
	for(i=1;i<=n;i++)
		q=q/(n-1)*n+k;
	printf("%d\n",q);
}