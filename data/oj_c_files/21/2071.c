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
	long j;
	int i,N,a[301]={0};
	int sum,max,min;
	scanf("%d",&N);
	scanf("%d",&a[0]);
	sum=max=min=a[0];
	for(i=1;i<N;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
		if(a[i]>max)max=a[i];
		else if(a[i]<min)min=a[i];
	}
	j=(max*N-sum)-(sum-min*N);

	if(j>0)printf("%d",max);
	else if(j==0)printf("%d,%d",min,max);
	else printf("%d",min);
}