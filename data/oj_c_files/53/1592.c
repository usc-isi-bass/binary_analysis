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
	int x[300];
	int n;
	int i,j;
	int q,k;
	int d[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	d[0]=x[0];
	k=1;
	for(i=0;i<n;i++)
	{
		q=0;
		for(j=0;j<k;j++)
		{
			if(x[i]==d[j])
				q++;
		}
		if(q==0)
		{
			d[k]=x[i];
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		if(i!=0)
			printf(",");
		printf("%d",d[i]);
	}
	return 0;
}
