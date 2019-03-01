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
	int m,n,i,j;
	int f[100]={1,2};
	scanf("%d",&m);
	for(j=1;j<=m;j++)
	{
		float sum=0;
		scanf("%d",&n);
		for(i=2;i<=n+1;i++)
		{
			f[i]=f[i-2]+f[i-1];
			sum=sum+(float)f[i-1]/f[i-2];    
		}
		printf("%.3f\n",sum);
	}
	return 0;
}