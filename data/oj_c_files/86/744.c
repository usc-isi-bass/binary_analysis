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
	int i,j,n,m,k[10],c;
	int l[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		c=60;
		for(j=0;j<m;j++)
		{
			scanf("%d",&k[j]);
			if(k[j]<=c)
				c=(k[j]+3>c)?k[j]:(c-3);
		}
		printf("%d\n",c);
	}
	return 0;
}