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
	int a=-1,b=-1,i,n;
	int c[300];
	char x;
	for(i=0;i<300;i++)
	{
		scanf("%d%c",&c[i],&x);
		if(x!=',')
		{
			n=i;
			break;
		}
	}
	for(i=0;i<=n;i++)
	{
		if(c[i]>a)a=c[i];
	}
	for(i=0;i<=n;i++)
		if(c[i]<a&&c[i]>b)b=c[i];
	if(b==-1)printf("No\n");
	else printf("%d\n",b);

	
}