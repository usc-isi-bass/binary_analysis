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
	int a,b,c,i,j,n,a1,a2;
	scanf("%d%d%d",&n,&a1,&a2);
	b=(a1>a2)?a1:a2;
	c=(a1<a2)?a1:a2;
	for(i=1;i<n-1;i++)
	{
		scanf("%d",&a);
		if(a>b)
		{
			c=b;b=a;
		}
		else if(a>c)c=a;
	}
	printf("%d\n%d\n",b,c);
}