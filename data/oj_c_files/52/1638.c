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

main()
{
	int a[10000],*b,n,m,i,j;
	scanf("%d""%d",&n,&m);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	b=&a[0];
	for(i=n-m;i<=n-1;i++)
	{
		printf("%d ",*(b+i));		
	}
	for(i=0;i<=n-m-1;i++)
	{
		printf("%d",*(b+i));
		if(i!=n-m-1) printf(" ");
	}

}