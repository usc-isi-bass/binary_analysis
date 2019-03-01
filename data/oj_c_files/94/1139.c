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
	int n,x[500],i,j,k,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	for(i=0,k=0;i<n;i++)
		if(x[i]%2!=0)
		{
			x[k]=x[i];
			k=k+1;
		}
    for(i=1;i<=k-1;i++)
		for(j=i+1;j<=k;j++)
			if(x[i-1]>x[j-1])
			{
				m=x[i-1];
				x[i-1]=x[j-1];
				x[j-1]=m;
			}
	for(i=1;i<=k;i++)
	{
		printf("%d",x[i-1]);
		if(i<k)
			printf(",");
	}



	return 0;
}