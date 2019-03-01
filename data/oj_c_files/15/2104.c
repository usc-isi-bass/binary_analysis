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
	int a[10],n,i,j,b,t,q,sum;
	scanf("%d",&n);
	for(i=0,t=0;i<=(n-1);i++)
	{
		for(j=0,sum=0;j<=(n-1);j++)
		{
			scanf("%d",&a[j]);
				sum=sum+a[j];
		}
		if(sum==(n*255))
			continue;
		b=(n*255-sum)/255;
		t=t+1;
	}
	q=(t-2)*(b-2);
	printf("%d",q);
}
