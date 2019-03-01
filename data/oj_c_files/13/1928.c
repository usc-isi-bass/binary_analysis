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
	int n,i,j,a,b=0,m,c[91]={0};
	scanf("%d",&n);
	for(i=0,m=0;i<n;i++)
	{
		b=0;
		scanf("%d",&a);
		for(j=0;j<91;j++)
		{
			if(c[j]==a)
				b=1;
		}
		if(b==0)
		{
			c[m]=a;
			m=m+1;
		}
	}
	printf("%d",c[0]);
	for(i=1;i<m;i++)
		printf(" %d",c[i]);
	return 0;
}

